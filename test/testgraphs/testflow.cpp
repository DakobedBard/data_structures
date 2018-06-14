/*

Here we will define unit tests for our heap.  



*/



#include "Heap.h"
#include "testflow.h"



using ::testing::Return;

FlowTest::FlowTest() {
    // Have qux return true by default
    ON_CALL(m_bar,qux()).WillByDefault(Return(true));
    // Have norf return false by default
    ON_CALL(m_bar,norf()).WillByDefault(Return(false));
}

FlowTest::~FlowTest() {};

void FlowTest::SetUp() {};

void FlowTest::TearDown() {};

TEST_F(FlowTest, SimpleHeapTest) {

	Heap<int, std::less<int>> minheap(10);
//	minheap.insertKey(3);
//	minheap.insertKey(5);
//	minheap.insertKey(1);


}

TEST_F(FlowTest, ByDefaultBazFalseIsFalse) {

}

TEST_F(FlowTest, SometimesBazFalseIsTrue) {

}

