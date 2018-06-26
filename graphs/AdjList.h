#ifndef _ADJLIST_H_
#define _ADJLIST_H_

#include <vector>
#include <iostream>
#include <unordered_map>
#include <set>
#include <list>
#include "AdjMatrix.h"
#include "MST.h"


/*

Adjacency list 

TODO:


Bellman Ford

Kruskall's ALgorithm

Vertex Coloring..

Network Flow... 

Connectivity()
	Is there a path between two vertices?
	

*/



/*
template <class T_>
class Edge{
		T_ src;
		T_ dist;
		int w;
		Edge(T_ src_, T_ dist_, int w_):src(src_), dist(dist_), w(w_){}
};

*/


template <class T>
struct Edge{
	T src;
	T dest;
	int weight;
	Edge(T src_, T dest_, int w):src(src_), dest(dest_), weight(w){}
	bool operator < (const Edge& a){
		return this->weight < a.weight;
	}
	 friend std::ostream &operator<<( std::ostream &output, const Edge &e ) { 
         	output << e.src << " - " << e.dest <<  std::endl;
         	return output;            
      	}
}; 



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
		int size(){return adjacent.size();}
		

	};

	std::unordered_map<T, Vertex<T>> vertexLookup;


 public:
	AdjList(){
	}
	Vertex<T> getVertex(T label);
	T defaultval;
	void addEdge(T src, T dest);
	void addEdge(T src, T dest, int w);
	void addUndirectedEdge(T src, T dest);
	void addUndirectedEdge(T src, T dest, int w);
	void printEdges(T src);
	void print(T src);
	int size(){
		return vertexLookup.size();
	}
	void print(Vertex<T> src);
	bool hasPathDFS(T src, T dest);
	bool hasPathDFS(Vertex<T> src, Vertex<T> dest, std::set<T> &visited);
	bool hasPathBFS(T src, T dest);
	bool hasPathBFS(Vertex<T> src, Vertex<T> dest);
	std::unordered_map<T,T> DFS(T src);
	void DFS(T src, std::unordered_map<T, std::string> &state, std::unordered_map<T, T> &p,std::unordered_map<T, int> &entry, 	  std::unordered_map<T, int> &exit, int& time);

	void setdefault(T t){
		defaultval = t;
	}
	std::unordered_map<T, int> dijkstra(T src);
	std::unordered_map<T, int> bellmanford(T src);
	std::unordered_map<T,T> prim(T src);
	std::vector<Edge<T>> kruskal(T src);
	int dumb();
	int dumb2();
	bool topoligicalsort();
	bool dfsCyclic();
	bool isCyclic();
	void DFSUtil(T src, T v, T parent, std::set<T> &visited, bool &isCycle);
	T find(std::unordered_map<T,T> &parent, T i);
	void TUnion(std::unordered_map<T,T> &parent, T x, T y);
	void process_edge(T x, T y, std::unordered_map<T,T> &p,bool &iscyclic);
	bool topoligicalsort(T src);
	bool isReachable(T s, T d);
	void removeEdge(T src, T dest);
};


/*

Two primary graph traversal algorithms.  BFS ad DFS.  The order in which vertices are explored, is dependent upon the data structure used to store the discovered but not process vertices.

- Queue by storing the vertices in a fist-in first out (FIFO) queue, we can explore the oldest unexpored vertices fist.  

- Stack Storing vertices in last in first out LIFO stack we explore verticus by lurching along a path, visiting a new neighbor if one is vailableand backing up only when we are surrounded by previously discovered vetices..




Skiena's implementation of dfs maintains a notion of traversal time for each vertex.  Our time clock ticks each time we enter or exit a vertex.  We keep track of the entry and exit times for each vertex.  

Depths First search has a recursive implementation which eliminates the need to explicitly use a stack.  

Gayle Lachman whatsherface used a utility function.  I will do the same... passing around references to maps.. 

*/

/*

Allright I have a function that removes an edge from the graph!!
*/


template <class T>
void AdjList<T>::removeEdge(T src, T dest){
	Vertex<T> u = vertexLookup[src];
	for(int i =0; i < u.adjacent.size(); i++){
		Vertex<T> v = u.adjacent[i];
		if(v.getLabel() == dest){
			u.adjacent.erase(u.adjacent.begin() + i);
			vertexLookup[u.getLabel()] = u;
			break;
		}
	}

}

template <class T>
bool AdjList<T>::isReachable(T s, T d){

	// Base case 

	if(s == d)
		return true;
	// Mark all the vertices as not visited..	
	std::set<T> visited;
	
}




template <class T>
void AdjList<T>::DFSUtil(T src, T v, T parent, std::set<T> &visited, bool &isCycle){
	visited.insert(v);
	Vertex<T> vertexu = getVertex(v);
	for(int i =0; i < vertexu.adjacent.size(); i++){
		Vertex<T> vertexv = vertexu.adjacent[i];
		if(src == vertexv.getLabel() && src!=parent){
			isCycle = true;
			return;
		}
//		std::set<T>::iterator it = visited.find(v.getLabel());
	//	if(it != visited.end()){
		//	//std::cout << "the value " << 
	//	}
	}

}
template <class T>
bool AdjList<T>::dfsCyclic(){

}



template <class T>
void AdjList<T>::print(T src){
	for(auto vertex:vertexLookup){
		Vertex<T> v = vertex.second;
		printEdges(v.getLabel());
	}

}
template <class T>
void AdjList<T>::print(Vertex<T> src){


}

/*

I am passing around ALOT of things by reference.... should time be one of them??

I am receiving a BAD ALLOC  Resolved...


Who is an ancestor... suppose that x is an an ancestor of y in the DFS.  THis implies that we must enter x before y, sincethere is no way we can be born before our own father or grandfather!  We also must exit y before we exit x because the mechancs of DFS ensure we cannot exit x until after we have back up from the search of all its descendants.  THus the time interval of y must be proerly nested within ancestor x.  

-How many descendants?  The difference between the exit and entry tims for v tells us how many descendents v has in the DFS tree.  The clock gets incremented on each vertex entry and vertex exit, so half the time differences denots the number of descendents of v.  

We will use entry and exit times in several applications of DFS, particularly topological sorting and biconnected/strongly connected components.  

The other important property of a depth-first search is that it partitions the
edges of an undirected graph into exactly two classes: tree edges and back edges. The
tree edges discover new vertices, and are those encoded in the parent relation. Back
edges are those whose other endpoint is an ancestor of the vertex being expanded,
so they point back into the tree.



*/


/*

We will use UnionFind to determine if there is a cycle present in this graph... 

Iterate through all edges of graph, find subset of both vertices of every edge, if both subsets are same then there is a cycle in graph


*/



/*

My DFS




*/


/*

This seems to work fine except for I get  segmentation fault at the very end...


*/
template <class T>
void AdjList<T>::DFS(T src, std::unordered_map<T, std::string> &state,std::unordered_map<T, T> &p, std::unordered_map<T, int> &entry, std::unordered_map<T, int> &exit, int &time){
	
	std::string st = state[src];
	std::cout << "The state of source is " << st << std::endl;
	state[src] = "discovered";
	time ++;
	Vertex<T> s = getVertex(src);
	//std::cout << "THe src is " << std::
	std::cout << " I am at vertex: " << src << " And I a adjacent to " << std::endl;
	printEdges(src); 
	std::cout<< " My adjlist has size "  << s.adjacent.size() << std::endl;

	for(int i =0; i < s.adjacent.size(); i++){
		
		Vertex<T> vertex = s.adjacent[i];
		std::cout << "Vertex.getLabel() " << vertex.getLabel() << std::endl; 
		if(state[vertex.getLabel()] == "undiscovered"){
			state[vertex.getLabel()] = "discovered";
			p[vertex.getLabel()] = s.getLabel();
			DFS(vertex.getLabel(), state, p, entry, exit, time);
		} else{
			//std::cout << " I have allready seen this vertex " << vertex.getLabel() << std::endl;
		}

	}
	
}


/*

I believe my segmentation faults are being cause my not initializing correctly.  

*/

template <class T>
std::unordered_map<T,T> AdjList<T>::DFS(T src){

	std::unordered_map<T, std::string> state;
	std::unordered_map<T, T> p;
	std::unordered_map<T, int> entry;
	std::unordered_map<T, int> exit;
	bool iscyclic;
	// Initialize all vertices as undiscovered. 
	for(auto vertex : vertexLookup){
		Vertex<T> v = vertex.second; 
		state[v.getLabel()] = "undiscovered";
		entry[v.getLabel()] = 0;
		exit[v.getLabel()] = 0;
	}
	
	int time =0;

	DFS(src, state, p, entry, exit, time);
	std::cout << "I don't get here" << std::endl;
}



template <class T>
bool AdjList<T>::hasPathDFS(T src, T dest){

	AdjList<T>::Vertex<T> s = getVertex(src);
	AdjList<T>::Vertex<T> d = getVertex(dest);
	std::set<T> visited;
	return hasPathDFS(s, d, visited);
}

template <class T>
bool AdjList<T>::hasPathDFS(Vertex<T> src, Vertex<T> dest, std::set<T> &visited){
	//std::cout << " I have visited vertex " << src.getLabel() << std::endl;
	if(visited.count(src.getLabel())){
		return false;
	}
	visited.insert(src.getLabel());
//	std::cout << " I am src " << src.getLabel() << "and i am adjcaent to " <<std::endl; 
	printEdges(src.getLabel());// " And I am adjcanet to "<< printEdges(src.getLabel()) <<  std::endl;
	if(src.getLabel() == dest.getLabel()){
	//	std::cout << "I see this " << std::endl; 
		return true;
	}
	for(int i =0; i < src.adjacent.size(); i ++){

		if(hasPathDFS(getVertex((src.adjacent[i]).getLabel()), dest, visited)){
			return true;
		}
	}
	return false;

}


/*
This should return a 

well fuck this doesnt quite work either...

Not adding vetices to the queue properly..
*/

template <class T>
bool AdjList<T>::hasPathBFS(T src, T dest){
	
	Vertex<T> s = getVertex(src);
	std::set<T> visited;
							// Mark the current node as visited and enqueue it
	std::list<Vertex<T>> queue;			// We are using a list for our queue for BFS soo... FIFO
	queue.push_back(s);
	
	while(!queue.empty()){
		
		Vertex<T> vertex = getVertex((queue.front()).getLabel());		// This fixes our problem... a little ugly though!

		//std::cout<< "We are at: " <<  vertex.getLabel() << " and I am adjacent to " << vertex.adjacent.size() << " vertices" <<std::endl;
		printEdges(vertex.getLabel());
		if(vertex.getLabel() == dest){
			return true;
		}

		queue.pop_front();
		for(int i =0; i < vertex.adjacent.size(); i++){
			//std::cout << " I am queue up " << vertex.adjacent[i].getLabel() << std::endl;
			if(!(visited.find(vertex.adjacent[i].getLabel())!=visited.end())){
				visited.insert((vertex.adjacent[i]).getLabel());
				queue.push_back(vertex.adjacent[i]);		// Put this in the set of elements we ave seen...
			}		
		}

	}


	return 0;
}





/*

Implementation of BFS... 

Allright lets do BFS... first lets initialize a set<T> 


In a breadth-first search of an undirected graph, we assign a direction to each edge, from the discoverer u to the discovered v.  We hus denote u to be the parent of v.  Since each node has exactly one pearent, except for the root, this defines a tree on the vertices of the graph.

BFS(G, s)
	for each vertex u ∈ V [G] − {s} do
		state[u] = “undiscovered”
	p[u] = nil, i.e. no parent is in the BFS tree
	state[s] = “discovered”
	p[s] = nil
	Q = {s}
	while Q  = ∅ do
		u = dequeue[Q]
	process vertex u as desired
	for each v ∈ Adj[u] do
		process edge (u, v) as desired
		if state[v] = “undiscovered” then
			state[v] = “discovered”
			p[v] = u
			enqueue[Q, v]
	state[u] = “processed”

  
*/


/*
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
*/

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
		return vertexLookup[label];
 	}

	Vertex<T> vertex(label);
	vertexLookup[label]=vertex;

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



template <class T>
void AdjList<T>::addUndirectedEdge(T src, T dest){

	AdjList::Vertex<T> s = getVertex(src);
	Vertex<T> d = getVertex(dest);
	s.adjacent.push_back(d);
	s.adjacent_weights.push_back(1);			// by default we wil keep an array of 
	vertexLookup[src] = s;
	
	d.adjacent.push_back(s);				// This edge is undirected so add it to the destination vertex adjlist aswell 
	d.adjacent_weights.push_back(1);
	vertexLookup[dest] = d;
}


template <class T>
void AdjList<T>::addUndirectedEdge(T src, T dest, int w){
	AdjList::Vertex<T> s = getVertex(src);
	Vertex<T> d = getVertex(dest);
	s.adjacent.push_back(d);
	s.adjacent_weights.push_back(w);
			// by default we wil keep an array of 
	vertexLookup[src] = s;
	d.adjacent.push_back(s);
	d.adjacent_weights.push_back(w);
			// by default we wil keep an array of 
	vertexLookup[dest] = d;

	

}

// Define a Union Find 

template <class T> 
struct subset{
	T parent;
	int rank;
};


template <class T>
T AdjList<T>::find(std::unordered_map<T,T> &parent, T i){
	//std::cout << "Find is getting called " << i << "and the parent of i is " << parent[i] <<  std::endl; 
	if(parent[i] == defaultval)

		return i;
	return find(parent, parent[i]);

}
template <class T>
void AdjList<T>::TUnion(std::unordered_map<T,T> &parent, T x, T y){

	T xset = find(parent, x);
	T yset = find(parent, y);
	parent[xset] = yset;
}

template <class T>
bool AdjList<T>::isCyclic(){

	std::unordered_map<T,T> parent;
	
	// Okay I never initialized...

	for(auto vertex:vertexLookup){
		 parent[vertex.first]= defaultval;
	//	std::cout << "vertex.first " << vertex.first << " parent[vertex.first]" << parent[vertex.first]<<std::endl;
	}
 
	
	// Iterate through all edges of graph.. find  subset of both vertices..
	for(auto vertex : vertexLookup){
		Vertex<T> u= getVertex(vertex.first);
		for(int i = 0 ; i < u.adjacent.size(); i++){
			T ulabel = u.getLabel();
			T x = find(parent, ulabel);
			//std::cout << "I am label " << ulabel <<  " and my parent is.. " << x << std::endl;
			T y = find(parent, (u.adjacent[i]).getLabel()); 
		//	std::cout << "I am label " << (u.adjacent[i]).getLabel() << " and i am in subset " << parent[u.getLabel()] << std::endl;
			if ( x == y)
				return true;

			TUnion(parent, x, y);
		}
	}
	return false;
}



template <class T>
bool AdjList<T>::topoligicalsort(T src){

	// The first step to to performing topological sort is to determine that the graph does not have a cycle

	bool hascycle = this->isCyclic();
	

	std::cout << "Does the graph have a cycle "<< hascycle << std::endl;

}








#endif
