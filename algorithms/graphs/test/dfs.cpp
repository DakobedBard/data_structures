

#include <iostream>
#include "AdjList.h"
#include <string>

/*

Here I will test the implementations of DFS and BFS.... 

Okay it would appear as though BFS works... Now.. DFS



*/



int main(){

	AdjList<std::string> adjlist;


	std::string seattle = "Seattle";
	std::string portland = "Portland";
	std::string vancouver = "Vancouver";
	std::string spokane = "Spokane";
	std::string boise = "Boise";
	std::string LA = "Los Angeles";
	std::string chicago = "Chicago";
	std::string newyork = "New York";
	std::string denver = "Denver";

	adjlist.addEdge(seattle,portland);
	adjlist.addEdge(portland,seattle);
	adjlist.addEdge(portland , boise);
	adjlist.addEdge(boise, portland);
	adjlist.addEdge(seattle , spokane);
	adjlist.addEdge(spokane, seattle);
	adjlist.addEdge(portland,LA);
	adjlist.addEdge(LA, portland );
	adjlist.addEdge(portland , denver);
	adjlist.addEdge(denver, portland);
//	adjlist.printEdges(portland);


	AdjList<std::string> graph;
	bool a = adjlist.hasPathDFS(seattle, newyork);
	// There are problems with the DFS!
	std::cout << " Is there a path from seattle to portland " << a << std::endl;

//	bool b = adjlist.hasPathBFS(seattle, denver);
//	std::cout << " Is there BFS from seattle to portland " << b << std::endl;
//	adjlist.hasPathBFS(

//    adjlist.printEdges(portland);
	
	
}
