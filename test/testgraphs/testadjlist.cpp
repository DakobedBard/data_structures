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
	std::unordered_map<int, int> shortest_paths = adjlist.dijkstra(0);
	
	ASSERT_EQ(shortest_paths[0],0);
	//ASSERT_EQ(shortest_paths[1],4);
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
}



TEST_F(AdjListTest, DijikstraTest) {
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

	
	AdjList<std::string> adjlist;
	adjlist.addEdge(seattle,portland,300);
	adjlist.addEdge(seattle,boise, 255);
	adjlist.addEdge(portland , boise, 178);
	adjlist.addEdge(boise , denver, 451);
	adjlist.addEdge(portland , sanfran, 225);
	adjlist.addEdge(oakland, sanfran, 543);
	adjlist.addEdge(sanfran , LA, 354);
	adjlist.addEdge(boston , newyork,63);
	adjlist.addEdge(denver , newyork, 1400);
	adjlist.addEdge(sandiego , LA, 120);



}

TEST_F(AdjListTest, UnionFindTest) {





}




