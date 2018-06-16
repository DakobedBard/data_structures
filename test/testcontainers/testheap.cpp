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



