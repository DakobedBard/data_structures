/*

Here we will define unit tests for our adjacency list representation of the graph.  We could do write some unit tests to test BFS and DFS...  

I am still having troubles with DFS seg faulting ..

I am having a little bit of trouble with


*/

#include "AdjList.h"
#include "testadjlist.h"
#include "UnionFind.h"
#include "ShortestPaths.h"
#include <limits.h>

using ::testing::Return;

AdjListTest::AdjListTest() {

}

AdjListTest::~AdjListTest() {};


TEST_F(AdjListTest, SimpleListTest) {



}

TEST_F(AdjListTest, TestAdjList) {

}


/*

Test DFS... do i return a vector of vertices that we have visited?  That seems like it could work.  Once again i must ask myself though, is the DFS traversal unque, the order in which the vertices are added could

WHY THE FUCK IS THIS SEGMENTATION FAULTING!!! THE ALGORITHM SEEMS TO WORK BUT JUST DOST NOT EXIT CORRECTLY...

*/


TEST_F(AdjListTest, TestDFSTraversal) {
	std::cout << "Is this working " << std::endl; 
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
	std::string boston = "Boston";
	std::string sanfran = "San Fransisco";
	std::string oakland = "Oakland";
	std::string sandiego = "San Diego";
	adjlist.addUndirectedEdge(seattle,portland);
	adjlist.addUndirectedEdge(seattle,boise);
	adjlist.addUndirectedEdge(portland , boise);
	adjlist.addUndirectedEdge(boise , denver);
	adjlist.addUndirectedEdge(portland , sanfran);
	adjlist.addUndirectedEdge(oakland, sanfran);
	adjlist.addUndirectedEdge(sanfran , LA);
	adjlist.addUndirectedEdge(boston , newyork);
	adjlist.addUndirectedEdge(denver , newyork);
	adjlist.addUndirectedEdge(sandiego , LA);

	//adjlist.DFS(seattle);


}


/*
Can we find a cycle in the graph??

One way of doing so is to use UnionFind... This is only relevant in undirected graphs.  


*/
/*
TEST_F(AdjListGraph, FindCycle) {
	
// In order for us to test whether or not we can find a cycle in the graph we must first create a graph with a cycle in it..

	AdjList<std::string> adjlist;
	std::string seattle = "Seattle";
	std::string portland = "Portland";
	std::string spokane = "Spokane";
	std::string boise = "Boise";
	std::string vancounver = "Vancouver";
	adjlist.addUndirectedEdge(seattle, portland);
	adjlist.addUndirectedEdge(portland, boise);
	adjlist.addUndirectedEdge(boise, spokane);
	adjlist.addUndirectedEdge(spokane, seattle);
	adjlist.addUndirectedEdge(seattle, vancounver);

	adjlist.isCyclic();
	// Well I haven't tested out the union find...



}

/*



*/



/*

Write a test that checks the corectness of the BFS algorithm you defined earlier.  

How do we test BFS ?  

The BFS function we defined 


*/



TEST_F(AdjListTest, TestBFSTraversal) {

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
	std::string boston = "Boston";
	adjlist.addUndirectedEdge(seattle,portland);
	adjlist.addUndirectedEdge(seattle,boise);
	adjlist.addUndirectedEdge(portland , boise);
	adjlist.addUndirectedEdge(boise , denver);

	adjlist.addUndirectedEdge(newyork , chicago);
	adjlist.addUndirectedEdge(boston , newyork);

	bool a = adjlist.hasPathBFS(seattle, portland);
//	std::cout << "Is there a BFS path from seattle to Portland ? " << a << std::endl;  
	ASSERT_EQ(a,1);
	bool b = adjlist.hasPathBFS(seattle, boise);
//	std::cout << "Is there a BFS path from seattle to boise ? " << b << std::endl;  
	ASSERT_EQ(b,1);
	bool c = adjlist.hasPathBFS(seattle, denver);
//	std::cout << "Is there a BFS path from seattle to denver ? " << c << std::endl;  
//	ASSERT_EQ(c,1);
	

		bool d = adjlist.hasPathBFS(newyork, boston);
	//std::cout << "Is there a BFS path from newyork to boston ? " << c << std::endl;  
	ASSERT_EQ(d,1);
}


/*
Test Dijikstra's shortest path algorithm ... 


*/

TEST_F(AdjListTest, ShortestPathTest) {

	AdjList<int> adjlist;
	adjlist.addUndirectedEdge(0,7,8);
	adjlist.addUndirectedEdge(0,1,4);
	adjlist.addUndirectedEdge(7,1,11);
	adjlist.addUndirectedEdge(1,2,8);
	adjlist.addUndirectedEdge(2,3,7);
	adjlist.addUndirectedEdge(2,5,4);
	adjlist.addUndirectedEdge(2,8,2);
	adjlist.addUndirectedEdge(8,6,6);
	adjlist.addUndirectedEdge(7,8,7);
	adjlist.addUndirectedEdge(7,6,1);
	adjlist.addUndirectedEdge(6,5,2);
	adjlist.addUndirectedEdge(5,4,10);
	adjlist.addUndirectedEdge(5,3,14);
	adjlist.addUndirectedEdge(4,3,9);
	//std::unordered_map<int, int> shortest_paths = adjlist.dijkstra(0);
	
	//ASSERT_EQ(shortest_paths[0],0);
	//ASSERT_EQ(shortest_paths[1],4);
	//for(auto vertex : shortest_paths){
	//	std::cout<< "The shortest path to vertex " << vertex.first << " is " << shortest_paths[vertex.first] << std::endl;
	//}
	

}	


/*

Implement Bellman Ford..



*/



TEST_F(AdjListTest, BellmanFordTest) {

	AdjList<int> adjlist;
	adjlist.addEdge(0,1,-1);
	adjlist.addEdge(0,2,4);
	adjlist.addEdge(1,2,3);
	adjlist.addEdge(1,3,2);
	adjlist.addEdge(1,4,2);
	adjlist.addEdge(3,2,5);
	adjlist.addEdge(3,1,1);
	adjlist.addEdge(4,3,-3);
	//adjlist.print(0);
	std::unordered_map<int, int> shortest_paths= adjlist.bellmanford(0);
	for(auto vertex : shortest_paths){
		std::cout<< "The shortest path to vertex " << vertex.first << " is " << shortest_paths[vertex.first] << std::endl;
	}
}




TEST_F(AdjListTest, PrimTest) {
	AdjList<int> adjlist; 
		
	adjlist.addUndirectedEdge(0,7,8);
	adjlist.addUndirectedEdge(0,1,4);
	adjlist.addUndirectedEdge(7,1,11);
	adjlist.addUndirectedEdge(1,2,8);
	adjlist.addUndirectedEdge(2,3,7);
	adjlist.addUndirectedEdge(2,5,4);
	adjlist.addUndirectedEdge(2,8,2);
	adjlist.addUndirectedEdge(8,6,6);
	adjlist.addUndirectedEdge(7,8,7);
	adjlist.addUndirectedEdge(7,6,1);
	adjlist.addUndirectedEdge(6,5,2);
	adjlist.addUndirectedEdge(5,4,10);
	adjlist.addUndirectedEdge(5,3,14);
	adjlist.addUndirectedEdge(4,3,9);
	std::unordered_map<int,int> mst = adjlist.prim(0);
}

TEST_F(AdjListTest, RemoveEdgeTest) {
	AdjList<int> adjlist;
	adjlist.addUndirectedEdge(0,7,8);
	adjlist.addUndirectedEdge(0,1,4);
	adjlist.addUndirectedEdge(7,1,11);
	adjlist.addUndirectedEdge(1,2,8);
	adjlist.addUndirectedEdge(2,3,7);
	adjlist.addUndirectedEdge(2,5,4);
	adjlist.addUndirectedEdge(2,8,2);
	adjlist.addUndirectedEdge(8,6,6);
	adjlist.addUndirectedEdge(7,8,7);
	adjlist.addUndirectedEdge(7,6,1);
	adjlist.addUndirectedEdge(6,5,2);
	adjlist.addUndirectedEdge(5,4,10);
	adjlist.addUndirectedEdge(5,3,14);
	adjlist.addUndirectedEdge(4,3,9);
	adjlist.removeEdge(4,3);
	adjlist.removeEdge(3,4);
}



TEST_F(AdjListTest, KruskalTest) {
	AdjList<int> adjlist; 
		
	adjlist.addEdge(0,1,10);
	adjlist.addEdge(0,2,6);
	adjlist.addEdge(0,3,5);
	adjlist.addEdge(1,3,15);
	adjlist.addEdge(2,3,4);
	std::vector<Edge<int>> mst = adjlist.kruskal(0);
}

TEST_F(AdjListTest, GreedyColoringTest) {
	AdjList<int> adjlist;
	adjlist.addUndirectedEdge(0,1);
	adjlist.addUndirectedEdge(0,2);
	adjlist.addUndirectedEdge(1,2);
	adjlist.addUndirectedEdge(1,3);
	adjlist.addUndirectedEdge(2,3);
	adjlist.addUndirectedEdge(3,4);
	std::cout << "Coloring of graph1" << std::endl;
	std::unordered_map<int, int> coloredgraph = adjlist.greedyColoring(0);


	AdjList<int> adjlist2;
	adjlist2.addUndirectedEdge(0,1);
	adjlist2.addUndirectedEdge(0,2);
	adjlist2.addUndirectedEdge(1,2);
	adjlist2.addUndirectedEdge(1,4);
	adjlist2.addUndirectedEdge(2,4);
	adjlist2.addUndirectedEdge(4,3);
//	std::cout << "Coloring of graph2" << std::endl;
//	std::unordered_map<int, int> coloredgraph2 = adjlist2.greedyColoring(0);
}




TEST_F(AdjListTest, CycleDetectionTest) {
	
	AdjList<int> adjlist;
	adjlist.addUndirectedEdge(0,2);
	adjlist.addUndirectedEdge(1,0);
	adjlist.addUndirectedEdge(1,4);
	adjlist.addUndirectedEdge(1,3);
	adjlist.addUndirectedEdge(1,2);
	adjlist.setdefault(-1);
	//bool b = adjlist.isCyclic();
	//ASSERT_EQ(b, true);


	AdjList<int> adjlist2;
	adjlist2.addUndirectedEdge(0,1);
	adjlist2.addUndirectedEdge(1,2);
	adjlist2.setdefault(-1);
	bool  c = adjlist2.isCyclic();
	ASSERT_EQ(c, false);

	adjlist2.addUndirectedEdge(0,2);
//	adjlist2.addUndirectedEdge(1,2);

	
	bool a = adjlist2.isCyclic();
	ASSERT_EQ(a, true);

//	adjlist.addUndirectedEdge(3,4);
//	bool a = adjlist.isCyclic();
//	ASSERT_EQ(a, true);

}

/*

TEST_F(AdjListTest, UnionFindTest) {

	AdjList<int> adjlist; 
	adjlist.addEdge(0,1);
	adjlist.addEdge(1,2);
	adjlist.addEdge(2,3);
	adjlist.addEdge(3,4);
	adjlist.addEdge(4,5);
	adjlist.addEdge(2,0);
	adjlist.setdefault(-1);		// This is stupid but I'm not sure of another way around this!
	bool a = adjlist.isCyclic();

	ASSERT_EQ(a, true);

}


*/
/*


*/
TEST_F(AdjListTest, TestConnectivity) {
	
	AdjList<int> adjlist; 
	adjlist.addEdge(0,1);
	adjlist.addEdge(0,2);
	adjlist.addEdge(1,2);
	adjlist.addEdge(2,3);
	adjlist.addEdge(3,3);
	
	int u =1, v = 3;
	adjlist.isReachable(1,3);
}




/*

Of course topolgical sorting is non unique 

The difference between DFS and topological sorting is that when we start from vertex 5 ( a source), in DFS we would never reach vertex 4.  However in topological sorting... we would reach vertex 4.  For my implementation I will start at a source vertex and perform DFS on this.  Then... I will loop through all of the vertices and perform DFS on all vertices that have not been visited... 

*/



TEST_F(AdjListTest, TestTopologicalSort) {
	AdjList<int> adjlist;

	adjlist.addEdge(5,0);
	adjlist.addEdge(5,2);
	adjlist.addEdge(2,3);
	adjlist.addEdge(4,1);
	adjlist.addEdge(4,0);
	adjlist.addEdge(3,1);
	//adjlist.setdefault(-1);
	//bool a = adjlist.isCyclic();
	//ASSERT_EQ(a, false);
	adjlist.topoligicalsort(5);
	adjlist.stacktopo(5);
}

// Test case for the all topological sorts... 

TEST_F(AdjListTest, TestDFSCycleDetection) {
	AdjList<int> adjlist;

	adjlist.addEdge(5,0);
	adjlist.addEdge(5,2);
	adjlist.addEdge(2,3);
	adjlist.addEdge(4,1);
	adjlist.addEdge(4,0);
	adjlist.addEdge(3,1);

}



TEST_F(AdjListTest, TestDFSCycleDetection2) {
	
	AdjList<int> adjlist;
	adjlist.addEdge(0,1);
	adjlist.addEdge(0,2);
	adjlist.addEdge(1,2);
	adjlist.addEdge(2,0);
	adjlist.addEdge(2,3);
//	adjlist.addEdge(3,3);	

	bool b = adjlist.dfsCyclic();
	ASSERT_EQ(b, true);
}


