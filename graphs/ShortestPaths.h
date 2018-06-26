/*

Implementatin of Dijikstra and Bellman Ford...


*/

#ifndef _DGL_SHORTESTPATHS_H_
#define _DGL_SHORTESTPATHS_H_


#include "AdjList.h"
#include <vector>
#include <unordered_map>
#include <set>
#include <iostream>
#include "Heap.h"
#include <limits.h>

/*
In Dijksra's algorithm, two sets are maintained, one set contains the list of vertices already included in the shortest path tree, and the other contains vertices not yet included.  With adjacency list representation, all vertices can be traversed in O(V+E) time using BFS>  The idea is to traverse all vertices of grap using BFS, and use a Min Heap to store the vertices noet yet including in SPT


This function will return an unordered_map which maps T to an integer distance.  

1) Create a mineap of size V where V is the number of vertices in the given graph.

2) Initialize Minheap with source vertex as root

3) While Min Heap is not empty, do following 

	a) Extract the vertex with minimum distance value node from Min heap
 	b) for every adjacent vertex of u, check if v is in Min heap.  If v is in minheap and distance value is more than weight of u-v plus distance value of u then update the distance value of v.  


My algorithm is not doing BFS properly.... Should I inialize 

*/

template <class T>
class VertexDist{
	T label;
	int dist;
  public:
	int getDist(){
		return dist;
	}
	T getLabel(){
		return label;
	}
	VertexDist(){}
	VertexDist(T label_):label(label_){}
	VertexDist(T label_, int dist_):label(label_),dist(dist_){}
	bool operator < (const VertexDist &rhs){
		return dist < rhs.dist;
	}
	bool operator > (const VertexDist &rhs){
		return dist > rhs.dist;
	}
	bool operator == (const VertexDist &rhs){
		return label == rhs.label;
	}


	 friend std::ostream &operator<<( std::ostream &output, const VertexDist &v ) { 
         output << "Vertex : " << v.label << " with shortest distance to src  of " << v.dist <<  std::endl;
         return output;            
      }
};


template <class T>
int AdjList<T>::dumb(){
	return 3;
}

template <class T>
std::unordered_map<T, int> AdjList<T>::dijkstra(T src){
	
	// Initialize the distance to each vertex beside the source to infinite and the source as zero.. 
	// Initialize the heap as well with our class VertexDist.	
	std::unordered_map<T,int> shortest_paths;
	Heap<VertexDist<T>> minheap(vertexLookup.size());
	for(auto vertex : vertexLookup){

		if(vertex.second.getLabel() != src){
			shortest_paths[vertex.second.getLabel()]= INT_MAX;
			VertexDist<T> v(vertex.second.getLabel(), INT_MAX);
			minheap.insert(v);
		}
	}

	// I was having trouble with initialiation?? Loop through edges adjacent to the source and update their keys 
	Vertex<T> s = getVertex(src);

	for(int i=0; i < s.size(); i++){
		VertexDist<T> newV((s.adjacent[i]).getLabel(),s.adjacent_weights[i]) ;
		VertexDist<T> oldV(( s.adjacent[i]).getLabel(), INT_MAX);
		minheap.decreaseKey(oldV, newV);
		shortest_paths[(s.adjacent[i]).getLabel()] = s.adjacent_weights[i];

	}


	shortest_paths[src] = 0;

	while(!minheap.isEmpty()){
		std::cout << "print before extrat" << std::endl;
		minheap.printHeap();
		VertexDist<T> udist= minheap.extractmin();	// Extract the min distance VertexDist from the heap..
		Vertex<T>  u = getVertex(udist.getLabel());
		T ulabel = u.getLabel();
		std::cout << "Print after we extract " << std::endl;
		minheap.printHeap();
		std::cout << "Extracting vertex " << ulabel << std::endl;
		std::cout << "The number of elements in the heap is... "<< minheap.heapsize() << std::endl;
	
		for(int i =0; i < u.adjacent.size(); i++){	// For every adjacent vertex of u, check if v is in 									// minheap and if its distance value is more than the weight of 
								// u-v plus distance to u, then update the distance value of v.
			
			T vlabel = (u.adjacent[i]).getLabel();
			// If !minheap.isInMinHeap(vlabel), then this edge has allready been extracted and we should just skip this one
			if(!minheap.isInMinHeap(vlabel)){
				std::cout << " Vertex " << vlabel << " is not in the minheap and has already been extracted " << std::endl; 				
				continue;
			}
			std::cout << ulabel << " has a shorest path of " << shortest_paths[ulabel] << "and is adjacent to " << vlabel << " which has a shortest_path to src of " << shortest_paths[vlabel] << std::endl;
			int weightuv = u.adjacent_weights[i];
			
			std::cout << " printing inside the for loop.." << std::endl;
			minheap.printHeap();

			if(shortest_paths[vlabel] == INT_MAX){

// This is our first encounter to Vertex v,
					std::cout << vlabel << " Has a distance of INT_MAX!";  
					shortest_paths[vlabel] = shortest_paths[ulabel] + weightuv;
					minheap.decreaseKey(VertexDist<T>(vlabel,0),VertexDist<T>(vlabel,shortest_paths[vlabel]));
				continue;
			}

			if( weightuv + shortest_paths[ulabel] < shortest_paths[vlabel]){
					shortest_paths[vlabel] = shortest_paths[u.getLabel()] + weightuv;
					minheap.decreaseKey(VertexDist<T>(vlabel,0),VertexDist<T>(vlabel,shortest_paths[vlabel]));
			}
		}				
	}
	return shortest_paths;
}	

/*

Implementation of BellmanFord

1) Initialize distances from source to all vertices as infinite and distane to source itself as 0.  

2) Loop over the vertices |V| -1 times.  For each edge u-v
	For each edge u-v 
		if dist[v] > dist[u] + weight of edge uv then update dist[v]
			dist[v] = dist[u] + weight of edge uv


*/



template <class T>
std::unordered_map<T, int> AdjList<T>::bellmanford(T src){
	//print(src);
	std::unordered_map<T, int> shortest_paths;
	for(auto vertex : vertexLookup){
		if(vertex.second.getLabel() != src){
			shortest_paths[vertex.second.getLabel()]= INT_MAX;	
		}
	}

	shortest_paths[src] = 0;

	for(int i =1; i < vertexLookup.size(); i++){
		for(auto vertex: vertexLookup){
			Vertex<T> u = vertex.second;			
			Vertex<T> v;
			
			for(int j =0; j < u.size(); j++){		
			
				v = u.adjacent[j];
				int weightuv =  u.adjacent_weights[j];
			//	std::cout << "Vertex " << u.getLabel() << " and vertex "<< v.getLabel() <<" have an edge weight of " << weightuv << std::endl;
			//	std::cout << " I am vertex " << u.getLabel() << " and I am adjacent to " << v.getLabel() << std::endl;
				//std::cout << "Vertex " << u.getLabel() << " has a shortest path distance of.." << shortest_paths[u.getLabel()] <<
			//	" and is adjacent to Vertex " << v.getLabel() << " has a shortest path distance of.." << shortest_paths[v.getLabel()] <<std::endl;
				if(shortest_paths[u.getLabel()] != INT_MAX && shortest_paths[u.getLabel()] + weightuv < shortest_paths[v.getLabel()] ) {
					//std::cout << "Updating the shortest path to " << v.getLabel() << "with a distance of " << shortest_paths[u.getLabel()] + v.getLabel() <<std::endl;
					shortest_paths[v.getLabel()]= shortest_paths[u.getLabel()] + weightuv;
				}
			}
			std::cout <<std::endl;
		}
	}


	// We iterate through the edges one more time to detect a negative weight cycle..
	for(auto vertex : vertexLookup){
		Vertex<T> src;			
		Vertex<T> dest;
		src = getVertex((vertex.second).getLabel());
		for(int j =0; j < src.size(); j++){		

			dest = (vertex.second).adjacent[j];
			
		}
	}

	
	return shortest_paths;
}




/*

/*
Prim's MST for adjacency list representation..

Adjacency lists allow us to get O(ElogV).  Somewhat analogous to Dijkstra's algorithm, we maintain two sets.  One set contains vertices which have been included in the MST and other set contains vertices not yet included

1) Create a min heap of size V where V is the number of vertices in the given Graph.. 

2) Initialize minheap with first vertex as root (the key value assigned to first vertex is 0).

3) While min heap is not empty, do following
	a) extrac the min value node from min heap.  Let the extracted vertex be u.
	b) For every adjacent vertex v of u, check if v is in min heap and its key value is more than weight of u-v , the nupdate the key value of v as weight of u-v.  

*/

template <class T>
class HeapNode{
	T label;
	int key;
  public:
	HeapNode(){}
	HeapNode(T label_, int key_):label(label_), key(key_){}
	T getLabel(){return label;}

	bool operator < (const HeapNode &rhs){
		return key < rhs.key;
	}
	bool operator > (const HeapNode &rhs){
		return key > rhs.key;
	}
	bool operator == (const HeapNode &rhs){
		return label == rhs.label;
	}


	 friend std::ostream &operator<<( std::ostream &output, const HeapNode &v ) { 
         output << "Vertex : " << v.label << " with a key value of " << v.key <<  std::endl;
         return output;            
      }


};

template <class T>
void printmst(std::unordered_map<T,T> mst){
	std::cout << "The MST for this graph is.. " << std::endl;	

	for(auto t : mst){
		std::cout << t.first << " - " << t.second << std::endl;
	}

}


template <class T>
std::unordered_map<T,T> AdjList<T>::prim(T src){
	//std::vector<Edge<T>> mst;
	std::unordered_map<T,T> mst;
	Heap<HeapNode<T>> minheap(vertexLookup.size());
	std::unordered_map<T, int> keys;
	for(auto vertex : vertexLookup){

		if(vertex.second.getLabel() != src){
			keys[vertex.second.getLabel()]= INT_MAX;
			HeapNode<T> v(vertex.second.getLabel(), INT_MAX);
			minheap.insert(v);
		}else{
			keys[src]= 0;
			HeapNode<T> v(src, 0);
			minheap.insert(v);
		}
	}

	while(!minheap.isEmpty()){
		HeapNode<T> minelement= minheap.extractmin();
		Vertex<T> u = getVertex(minelement.getLabel());
		
		for(int i =0; i < u.adjacent.size(); i++){
			Vertex<T> v = u.adjacent[i];
			int weightuv =  u.adjacent_weights[i];
			if(minheap.isInMinHeap(HeapNode<T>(v.getLabel(), 0)) && keys[v.getLabel()] > weightuv ){
				keys[v.getLabel()] = weightuv;
				mst[v.getLabel()] = u.getLabel();
				minheap.decreaseKey(HeapNode<T>(v.getLabel(),0),HeapNode<T>(v.getLabel(),weightuv ));

			}
		}

	}

	
	printmst(mst);

	
	return mst;
}


/*

Kruskal's algorithm for minimum spanning tree

1) Sort all the edges in non decreasin order of their weight..
2) Pick the smallest edge.  Check if it forms a cycle with the spanning tree formes so far.  If cycle is not formed, inclue this edge.  Else, discard it.  
3) Repeat step @2 until there are (V-1) edges in the spanning tree. 


*/



template <class T>
void printedgesvector(std::vector<Edge<T>> edges){
	std::cout << "The MST of the graph is.. " << std::endl;
	for(int i =0; i < edges.size(); i++){
		std::cout << edges[i];
	}
	std::cout << std::endl;

}


template <class T>
std::vector<Edge<T>> AdjList<T>::kruskal(T src){
	std::vector<Edge<T>> edges;
	for(auto vertex:vertexLookup){
		Vertex<T> u = vertex.second;
		for(int i=0; i < u.adjacent.size(); i++){

			Vertex<T> v = u.adjacent[i];
			int weightuv = u.adjacent_weights[i];
			Edge<T> edgeuv(u.getLabel(), v.getLabel(), weightuv);
			edges.push_back(edgeuv);	
		}
	}

	
	std::sort(edges.begin(), edges.end());

	for(int i =0; i < edges.size(); i++){

		//std::cout << "The edge between " << (edges[i]).src << " and " << (edges[i]).dest << " has weight of " << (edges[i]).weight << std::endl;
	}

	


	// Now we will loop through the edges until we have |V| -1 edges.. Add edges to the graph (which begins empty).  If the edge causes a cycle in the graph.. remove it.  If it does not cause a cycle to form we will increment the count.  

	
	std::unordered_map<T,T> mst;
	std::vector<Edge<T>> mstedges;
	int count =0;
	AdjList<T> detectCycle;
	for(int i =0; i < edges.size(); i++){
		if(count >= vertexLookup.size()){
			break;
		}
		detectCycle.addEdge(edges[i].src, edges[i].dest, edges[i].weight);
		if(detectCycle.isCyclic()){
			detectCycle.removeEdge(edges[i].src, edges[i].dest);
		}else{
			count++;
			mst[edges[i].src] = edges[i].dest;
			mstedges.push_back(edges[i]);
		}
	}

	printedgesvector(mstedges);
	return mstedges;				// Now... let's return the mst..

}




#endif


