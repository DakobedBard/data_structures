/*

Implementatin of Dijikstra and Bellman Ford...


*/


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
	shortest_paths[src] = 0;
	//VertexDist<T> v2(src, 0);
	//VertexDist<T> v(src, INT_MAX);
	// Okay... the decrease key function requires us to pass the old value and the new value... In this case we are storing
	// a custom class VertexDist<T> in our heap.  How would I use the the decrease key operation on this... Of course inorder to
	// do this I have to overload the comparison operator... easy!!  This is a little bit ugly though!!
	//minheap.decreaseKey(v, v2);		
	// We still have the source vertex...
	
	VertexDist<T> min = minheap.min();

	// Extract the vertex with minimum distance from the Min Heap.  Let the extracted vertex be u
	
	while(!minheap.isEmpty()){
		VertexDist<T> udist= minheap.extractmin();	// Extract the min distance VertexDist from the heap..
		T ulabel = udist.getLabel();
		Vertex<T>  u = getVertex(ulabel);
		std::cout << "Extracting vertex " << ulabel << std::endl;
		for(int i =0; i < u.adjacent.size(); i++){	// For every adjacent vertex of u, check if v is in 									// minheap and if its distance value is more than the weight of 
								// u-v plus distance to u, then update the distance value of v.
			
			T vlabel = (u.adjacent[i]).getLabel();	
			int weightuv = u.adjacent_weights[i];
			std::cout << " I am vertex " << ulabel << " and I am adjacent to " << vlabel << " with weight " << weightuv << std::endl;	
			
// Alright now we check if the VertexDist v is in the minheap already.  To do this I wrote a function that searches the heap fo
			
			if(minheap.isInMinHeap(VertexDist<T>(vlabel)) && weightuv + shortest_paths[u.getLabel()] < shortest_paths[vlabel]){
				std::cout << "DO i get here " << std::endl;
				shortest_paths[vlabel] = shortest_paths[u.getLabel()] + weightuv;
				VertexDist<T> olddist(vlabel, 0);
				VertexDist<T> newdist(vlabel, shortest_paths[vlabel]);
				minheap.decreaseKey(olddist,newdist);
			}					
		}
	}


	return shortest_paths;
}	



