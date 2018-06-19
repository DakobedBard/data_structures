#ifndef _MST_H_
#define _MST_H_
/*

Minimum Spanning Tree is a subset of the edges of a conneted, edge-weighted undirected graph that connects all the vertices together, w/out any cycles with the minimum possible total edge weight.  That is, it is a spanning tree whose sum of edge weights is a small as possible.  More generally, any edge-weighted undirected graph has a minimum spanning forest which is a union of the minimum spanning trees for its connected components. 


In this file we will have implemnetations of Kruskall and Prim...

Kruskal's algorithm is an alternate approach to finding minimum spanning trees that prove more efficient on sparse graphs.  Like Prim, Kruskals algorithm is greedy.  Unlike Prim, it does not start with a particular vertex.  Kruskal's algorithm builds up connected components of vertices, culminating in the minimum spanning tree.  Initially, each vertex forms its own seperate component in the tree-to-be.  The algorithm repeatedly considers the lightest remaining edge and tests whether its two end points lie within the same connected component.  



*/




/*
Prim's MST for adjacency list representation..

Adjacency lists allow us to get O(ElogV).  Somewhat analogous to Dijkstra's algorithm, we maintain two sets.  One set contains vertices which have been included in the MST and other set contains vertices not yet included

1) Create a min heap of size V where V is the number of vertices in the given Graph.. 

2) Initialize minheap with first vertex as root (the ke value assigned to first vertex is 0).

3) While min heap is not empty, do following
	a) extrac the min value node from min heap.  Let the extracted vertex be u.
	b) For every adjacent vertex v of u, check if v is in min hea  
*/

#include "AdjList.h"
#include <vector>
#include <unordered_map>
#include <limits>




class HeapNode{
	T label;
	int key;

public:
	int getkey(){return key;)}
	T getlabel(){return label;}
	HeapNode(){}
	HeapNode(T label_):label(label_), key(INT_MAX){}
	HeapnNode(T label_, int key_):label(label_), key(key_){}
	
};




template<class T>
std::vector<Edge<T>> prim(){
	
	std::vector<Edge<T>> mst;
}



#endif


