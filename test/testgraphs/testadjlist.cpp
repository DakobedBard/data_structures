/*

Here we will define unit tests for our adjacency list representation of the graph.  We could do write some unit tests to test BFS and DFS...  

I am still having troubles with DFS seg faulting ..


*/

#include "AdjList.h"
#include "testadjlist.h"
#include "UnionFind.h"

using ::testing::Return;

AdjListGraph::AdjListGraph() {
    // Have qux return true by default
    ON_CALL(m_bar,qux()).WillByDefault(Return(true));
    // Have norf return false by default
    ON_CALL(m_bar,norf()).WillByDefault(Return(false));
}

AdjListGraph::~AdjListGraph() {};

void AdjListGraph::SetUp() {};

void AdjListGraph::TearDown() {};

TEST_F(AdjListGraph, SimpleListTest) {



}

TEST_F(AdjListGraph, TestAdjList) {

}


/*

Test DFS... do i return a vector of vertices that we have visited?  That seems like it could work.  Once again i must ask myself though, is the DFS traversal unque, the order in which the vertices are added could

WHY THE FUCK IS THIS SEGMENTATION FAULTING!!! THE ALGORITHM SEEMS TO WORK BUT JUST DOST NOT EXIT CORRECTLY...

*/


TEST_F(AdjListGraph, TestDFSTraversal) {
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



TEST_F(AdjListGraph, TestBFSTraversal) {

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



