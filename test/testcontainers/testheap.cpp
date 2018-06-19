/*

Here we will define unit tests for our heap.  



*/



#include "Heap.h"
#include "testheap.h"



using ::testing::Return;

HeapTest::HeapTest() {
    // Have qux return true by default
    ON_CALL(m_bar,qux()).WillByDefault(Return(true));
    // Have norf return false by default
    ON_CALL(m_bar,norf()).WillByDefault(Return(false));
}

HeapTest::~HeapTest() {};

void HeapTest::SetUp() {};

void HeapTest::TearDown() {};



TEST_F(HeapTest, SimpleHeapTest) {

	Heap<int> minheap(10);
	minheap.insert(5);
	minheap.insert(12);
	minheap.insert(2);
	int a = minheap.min();
	ASSERT_EQ(a, 2);
	

}



TEST_F(HeapTest, MinTest) {

	Heap<int> minheap(10);
	minheap.insert(5);
	minheap.insert(12);
	minheap.insert(2);
	int a = minheap.min();
	ASSERT_EQ(a, 2);
	int b = minheap.extractmin();
	ASSERT_EQ(b, 2);
	int c = minheap.extractmin();
	ASSERT_EQ(c, 5);	

}

TEST_F(HeapTest, HeapSortTest) {
		//std::vector<int> input= {4,3,8,1,9,15,16,14,20};
		std::vector<int> input= {4,3,8,1,9,15,18,23,33,2,19};
		std::vector<int> output = heapsort(input);

		for(int i =0; i < output.size(); i++){
			std::cout << " " <<  output[i] ;
		}
		std::cout << std::endl;
		ASSERT_EQ(output[0], 1);
		ASSERT_EQ(output[output.size()-1], 33);

}


// Test 

TEST_F(HeapTest, DecreaseKeyTest) {

	Heap<int> minheap(10);
	minheap.insert(5);
	minheap.insert(8);
	minheap.insert(11);
	minheap.insert(12);
	minheap.insert(15);
	minheap.insert(16);
	minheap.insert(21);
	minheap.decreaseKey(8,4);
	int a = minheap.min();
	ASSERT_EQ(a,4);

	int b = minheap.extractmin();
	int c = minheap.extractmin();
	ASSERT_EQ(c, 5);

}

// Do heap sort... maybe i should wrap this up into something.

class classTest{
	int k;
	int c;
	
};

TEST_F(HeapTest, IsInMinHeapTest) {
	
	Heap<int> minheap(10);
	minheap.insert(5);
	minheap.insert(8);
	minheap.insert(11);
	minheap.insert(12);
	minheap.insert(15);
	minheap.insert(16);
	minheap.insert(21);
	bool a = minheap.isInMinHeap(16);
	ASSERT_EQ(a, true);

	bool b = minheap.isInMinHeap(77);
	ASSERT_EQ(b, false);
}


