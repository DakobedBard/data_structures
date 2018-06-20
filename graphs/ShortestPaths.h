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


template <class T>
std::unordered_map<T, int> AdjList<T>::bellmanford(T src){




}








#endif


