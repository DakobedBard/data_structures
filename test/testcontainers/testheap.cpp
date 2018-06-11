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

	Heap<int, std::less<int>> minheap(10);
//	minheap.insertKey(3);
//	minheap.insertKey(5);
//	minheap.insertKey(1);


}

TEST_F(HeapTest, ByDefaultBazFalseIsFalse) {

}

TEST_F(HeapTest, SometimesBazFalseIsTrue) {

}

