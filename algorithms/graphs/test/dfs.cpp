

#include <iostream>
#include "AdjList.h"
#include <string>

/*

Here I will test the implementations of DFS and BFS.... 





*/



int main(){

	AdjList<std::string> adjlist;


	std::string seattle = "Seattle";
	std::string portland = "Portland";
	std::string boise = "Boise";
	std::string LA = "Los Angeles";
	std::string chicago = "Chicago";
	std::string newyork = "New York";

	adjlist.addEdge(seattle,portland);
	adjlist.addEdge(seattle,boise);
	adjlist.addEdge(portland, boise);
	adjlist.addEdge(portland, LA);

	adjlist.addEdge(boise, portland);
	adjlist.addEdge(chicago, newyork);


//	adjlist.hasPathBFS(

	adjlist.printEdges(portland);
	
	
}
