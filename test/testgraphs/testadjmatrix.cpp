/*

Here we will define unit tests for our heap.  
f


*/



#include "AdjMatrix.h"
#include "testadjmatrix.h"



using ::testing::Return;

AdjMatrixTest::AdjMatrixTest() {

}

AdjMatrixTest::~AdjMatrixTest() {};


/*


Okay... you have thrown together an adjacency matrix class... 

It is a little awkward however.  The order in which the vertices are indexed within the adjacency matrix depends on the order that the edges are added... so a little stupid!!

But overall good job... you implemented Floyd Warshall.  


*/

TEST_F(AdjMatrixTest, TransitiveClosureTest) {

	AdjMatrix<int> adjmatrix(4);
	adjmatrix.addEdge(0,1,5);
	adjmatrix.addEdge(1,2,3);
	adjmatrix.addEdge(2,3,1);
	adjmatrix.addEdge(0,3,10);

	adjmatrix.print();
	adjmatrix.floydWarshall();

}

TEST_F(AdjMatrixTest, SometimesBazFalseIsTrue) {

}

