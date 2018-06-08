#ifndef _ADJLIST_H_
#define _ADJLIST_H_

#include <vector>
#include <iostream>
#include <unordered_map>
#include <set>
#include <list>

/*

Adjacency list 

TODO:

DFS AND BFS




*/


template <class T>
class AdjList{

	template <class T_>
	class Vertex{
		T_ label;
 	 public:
		std::vector<Vertex<T>> adjacent;
		std::vector<int> adjacent_weights;
		int n;
		Vertex<T_>():n(0){}
		Vertex<T_>(T_ label_):label(label_){}
		T_ getLabel(){return label;}
		

	};


	std::unordered_map<T, Vertex<T>> vertexLookup;

 public:
	AdjList(){
		std::cout << "I am here " << std::endl;
	}
	Vertex<T> getVertex(T label);
	void addEdge(T src, T dest);
	void addEdge(T src, T dest, int w);
	void printEdges(T src);
	bool hasPathDFS(T src, T dest);
	bool hasPathDFS(Vertex<T> src, Vertex<T> dest, std::set<T> visited);
	bool hasPathBFS(T src, T dest);
	bool hasPathBFS(Vertex<T> src, Vertex<T> dest);
	
};

template <class T>
bool AdjList<T>::hasPathDFS(T src, T dest){

	AdjList::Vertex<T> s = getVertex(src);
	AdjList<T>::Vertex<T> d = getVertex(dest);
	std::set<T> visited();
	return hasPathDFS(s, d, visited);
}

template <class T>
bool AdjList<T>::hasPathDFS(Vertex<T> src, Vertex<T> dest, std::set<T> visited){

	if(visited.count(src.getLabel())){
		return false;
	}
	visited.insert(src.getLabel());
	if(src == dest){
		return true;
	}
	for(int i =0; i < src.adjacent.size(); i ++){
		if(hashPathDFS(src.adjacent[i], dest, visited)){
			return true;
		}
	}
	return false;

}


template <class T>
bool AdjList<T>::hasPathBFS(T src, T dest){
	

}
/*

Implementation of BFS... 



*/

template <class T>
bool AdjList<T>::hasPathBFS(Vertex<T> src, Vertex<T> dest){

	std::list<Vertex<T>> nextToVisit;
	std::set<T> visited;
	nextToVisit.insert(src);

	while(!nextToVisit.empty()){
		Vertex<T> vertex = nextToVisit.pop_back();

		if(vertex == dest){
			return true;
		}

		if(visited.count(vertex.getLabel())){
			continue;
		}

		visited.insert(vertex.getLabel());

		// Now iterate through the vertices adjacent to the current vertex...

		for(int i=0; i < vertex.adjacent.size(); i++){
			nextToVisit.insert(vertex.adjacent[i]);
		}

	}
	return false;
}


template <class T>
void AdjList<T>::printEdges(T src){
	Vertex<T> s = getVertex(src);
	for(int i = 0; i < s.adjacent.size(); i++){
		std::cout << s.getLabel() << " is adjacent to " << (s.adjacent[i]).getLabel() << std::endl;
	}

}


template<class T> 
AdjList<T>::Vertex<T> AdjList<T>::getVertex(T label){

	if(vertexLookup.find(label) != vertexLookup.end()){
		std::cout << "This Vertex has been seen already.." << std::endl;
		return vertexLookup[label];
 	}

	Vertex<T> vertex(label);
	vertexLookup[label]=vertex;
	std::cout << "We are creating a new vertex and returning it..." << std::endl;
	return vertex;

}

template <class T>
void AdjList<T>::addEdge(T src, T dest){

	AdjList::Vertex<T> s = getVertex(src);
	Vertex<T> d = getVertex(dest);
	s.adjacent.push_back(d);
	s.adjacent_weights.push_back(1);			// by default we wil keep an array of 
	vertexLookup[src] = s;	
}


template <class T>
void AdjList<T>::addEdge(T src, T dest, int w){
	AdjList::Vertex<T> s = getVertex(src);
	Vertex<T> d = getVertex(dest);
	s.adjacent.push_back(d);
	s.adjacent_weights.push_back(w);			// by default we wil keep an array of 
	vertexLookup[src] = s;	
}





#endif
