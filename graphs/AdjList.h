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

I think that I have made some progress on the BFS but DFS remains broken


Here on the asus branch

Write a function that returns an iterator to all of the keys in the graph...

IMPLEMENT INSERTION OF UNDIRECTED EDGES...

Hey goodjob you implemented DFS and BFS.... 




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
	}
	Vertex<T> getVertex(T label);
	void addEdge(T src, T dest);
	void addEdge(T src, T dest, int w);
	void addUndirectedEdge(T src, T dest);
	void addUndirectedEdge(T src, T dest, int w);

	void printEdges(T src);
	void print(T src);
	void print(Vertex<T> src);
	bool hasPathDFS(T src, T dest);
	bool hasPathDFS(Vertex<T> src, Vertex<T> dest, std::set<T> &visited);
	bool hasPathBFS(T src, T dest);
	bool hasPathBFS(Vertex<T> src, Vertex<T> dest);
	void DFS(T src);
	void DFS(T src, std::unordered_map<T, std::string> &state, std::unordered_map<T, T> &p,std::unordered_map<T, int> &entry, std::unordered_map<T, int> &exit, int& time);
	std::unordered_map<T, int> dijikstra(T src);
};


/*

Two primary graph traversal algorithms.  BFS ad DFS.  The order in which vertices are explored, is dependent upon the data structure used to store the discovered but not process vertices.

- Queue by storing the vertices in a fist-in first out (FIFO) queue, we can explore the oldest unexpored vertices fist.  

- Stack Storing vertices in last in first out LIFO stack we explore verticus by lurching along a path, visiting a new neighbor if one is vailableand backing up only when we are surrounded by previously discovered vetices..




Skiena's implementation of dfs maintains a notion of traversal time for each vertex.  Our time clock ticks each time we enter or exit a vertex.  We keep track of the entry and exit times for each vertex.  

Depths First search has a recursive implementation which eliminates the need to explicitly use a stack.  

Gayle Lachman whatsherface used a utility function.  I will do the same... passing around references to maps.. 

*/


template <class T>
void AdjList<T>::print(T src){
	for(auto vertex:vertexLookup){
		Vertex<T> v = vertex.second;
		printEdges(v);
	}

}
template <class T>
void AdjList<T>::print(Vertex<T> src){


}

/*

I am passing around ALOT of things by reference.... should time be one of them??

I am receiving a BAD ALLOC


*/

template <class T>
void AdjList<T>::DFS(T src, std::unordered_map<T, std::string> &state,std::unordered_map<T, T> &p, std::unordered_map<T, int> &entry, std::unordered_map<T, int> &exit, int &time){
	
	state[src] = "discovered";
	time ++;
	Vertex<T> s = getVertex(src);
	//std::cout << "THe src is " << std::
	std::cout << " I am at vertex: " << src <<std::endl; 
	// Now for each edge in the adjacenct edge...
	for(int i =0; i < s.adjacent.size(); i++){
		Vertex<T> vertex = s.adjacent[i];
		if(state[vertex.getLabel()] == "undiscovered"){
			state[vertex.getLabel()] = "discovered";
			p[vertex.getLabel()] = s.getLabel();
			DFS(vertex.getLabel(), state, p, entry, exit, time);
		} 

	}
	
}

template <class T>
void AdjList<T>::DFS(T src){

	std::unordered_map<T, std::string> state;
	std::unordered_map<T, T> p;
	std::unordered_map<T, int> entry;
	std::unordered_map<T, int> exit;
	// Initialize all vertices as undiscovered. 
	for(auto vertex : vertexLookup){
		Vertex<T> v = vertex.second; 
		state[v.getLabel()] = "undiscovered";
	}
	
	int time =0;

	DFS(src, state, p, entry, exit, time);


/*
	entry[src] = time;
	time++;
	Vertex<T> s = getVertex(src);
	//std::cout << "THe src is " << std::
	std::cout << " I am at vertex: " << src <<std::endl; 
	// Now for each edge in the adjacenct edge...
	for(int i =0; s.adjacent.size(); i++){
		Vertex<T> vertex = s.adjacent[i];
		if(state[vertex.getLabel()] == "undiscovered"){
			state[vertex.getLabel()] = "discovered";
			p[vertex.getLabel()] = s.getLabel();
			DFS(vertex.getLabel());
		} 

	}
	state[s.getLabel()] = "processed";
	exit[s.getLabel()] = time;
	time++;

*/
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
	s.adjacent_weights.push_back(1);
			// by default we wil keep an array of 
	vertexLookup[src] = s;
	d.adjacent.push_back(s);
	d.adjacent_weights.push_back(1);
			// by default we wil keep an array of 
	vertexLookup[dest] = d;
}




#endif
