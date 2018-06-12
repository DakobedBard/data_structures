#include "Heap.h"
#include "ShortestPaths.h"
/*


Okay I should make test cases for this...

Well my priority queue is broken... i need to figure out why.  

*/
int main(){
	Heap<int, std::less<int>> minheap(10);

	minheap.insertKey(3);
	minheap.insertKey(5);
	minheap.insertKey(1);
	minheap.insertKey(8);
	minheap.insertKey(45);
	minheap.insertKey(4);
	minheap.printHeap();
	std::cout<< "extract" <<std::endl;
	minheap.extractMin();	
	minheap.printHeap();
	std::cout<< "extract" <<std::endl;
	minheap.extractMin();
	minheap.printHeap();
//	minheap.insertKey(1);
//	minheap.insertKey(15);
//	minheap.insertKey(5);
//	minheap.insertKey(4);
//	minheap.insertKey(45);
	// Lets change the value of 2 to 1...
	//minheap.decreaseKey(2,1);
//	std::cout << "The minimum element before we extractkey " << minheap.getMin() << std::endl; 
//	minheap.extractMin();
	
//	std::cout << "The minimum element after we extractmin " << minheap.getMin() << std::endl; 
//	

//	std::cout << "The minimum element after we  extractmin " << minheap.getMin() << std::endl; 
	minheap.extractMin();
	/*std::string seattle = "Seattle";
	std::string portland = "Portland";
	std::string vancouver = "Vancouver";
	std::string spokane = "Spokane";
	std::string boise = "Boise";
	std::string LA = "Los Angeles";
	std::string chicago = "Chicago";
	std::string newyork = "New York";
	std::string denver = "Denver";

	AdjList<std::string> adjlist;
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
	
	*/

	//adjlist.dijikstra(seattle);


	//std::cout << "The minimun value in the priority queue is.." << minheap.getMin() <<std::endl;
	



}
