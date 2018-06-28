#ifndef _DTL_ADJMATRIX_H_
#define _DTL_ADJMATRIX_H_

/*

Adjacency Matrix class..

Alright this seems a little bit like a hack.  




*/


#include <vector>
#include <iostream>
#include <unordered_map>
#include <limits.h>

#define INF 99999



template <class T>
class AdjMatrix{
  private:
	int V; 		// Number of vertices
  	std::vector<std::vector<int>> adjmatrix;
	std::unordered_map<T, int> indexmap;
	void printSolution(std::vector<std::vector<int>> dist);
  public:
	int vertexCount;

	void floydWarshall();

	AdjMatrix(int V_):V(V_), adjmatrix(V_,std::vector<T>(V_, INF)){
		vertexCount =0;
		for(int i=0; i < V; i++){
			adjmatrix[i][i] = 0;
		}
	}
	void addEdge(T src, T dest, int weight){
		if(indexmap.find(src) == indexmap.end()){
			if(vertexCount < V){
				indexmap[src] = vertexCount;
				vertexCount ++;
			}else{
				std::cout << "Attempting to add too many vertices " << std::endl;
				return;

			}		
		}
		if(indexmap.find(dest) == indexmap.end()){
			if(vertexCount < V){
				indexmap[dest] = vertexCount;
				vertexCount++;
			}else{
				std::cout << "Attempting to add too many vertices " << std::endl;
				return;
			}
		}

		int indexsrc = indexmap[src];
		int indexdest = indexmap[dest];
		
		adjmatrix[indexsrc][indexdest]= weight;

	}

	int accesselement(int i, int j){
		if(i >= V | j >= V)
			return 0;
		return adjmatrix[i][j];
	}
	int getEdgeWeight(T u, T v){
		if(indexmap.find(u) == indexmap.end() | indexmap.find(v) == indexmap.end()){
			std::cout << "Atleast one of these vertices does not appear in the adjmatrix" << std::endl;
			return 0;
		}
	
		int i = indexmap[u];
		int j = indexmap[v];
		return accesselement(i, j);
	}
	void print();
	int getV(){return V;}	
};

// We have defined INF a large number.  If we used INT_MAX we would have to deal with arithmetic overflow..



template <class T>
void AdjMatrix<T>::floydWarshall(){

	std::vector<std::vector<int>> dist = adjmatrix;
	std::cout << "The size of dist is " << dist.size() << std::endl;

	for(int i =0; i < V; i++){
		for(int j=0; j< V; j++){
			for(int k =0; k<V;k++){
				// IF vertex k is on the shortest path from i to j, then update the value of dist[i][j]
				if(dist[i][k] + dist[k][j] < dist[i][j]){
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
	printSolution(dist);



}

template <class T>
void AdjMatrix<T>::printSolution(std::vector<std::vector<int>> dist){

	for(int i=0; i < V;i++){
		for(int j=0; j < V; j++){
			if(dist[i][j] == INF)
				std::cout << "INF" << " ";
			else
				std::cout << dist[i][j] << "   ";
		}
		std::cout << std::endl;
	}
}


template <class T>
void AdjMatrix<T>::print(){
	for(int i=0; i < V; i++){
		for(int j=0; j < V; j++){
			if(adjmatrix[i][j] == INF)
				std::cout << "INF" << " ";
			else
				std::cout << adjmatrix[i][j] << "   ";
		}
		std::cout << std::endl;
	}
}



#endif
