/*

Here we will define unit tests for our heap.  



*/



#include "Heap.h"
#include "teststack.h"



using ::testing::Return;

StackTest::StackTest() {
    // Have qux return true by default
    ON_CALL(m_bar,qux()).WillByDefault(Return(true));
    // Have norf return false by default
    ON_CALL(m_bar,norf()).WillByDefault(Return(false));
}

StackTest::~StackTest() {};

void StackTest::SetUp() {};

void StackTest::TearDown() {};

TEST_F(StackTest, SimpleListTest) {



}

TEST_F(StackTest, ByDefaultBazFalseIsFalse) {

}

TEST_F(StackTest, SometimesBazFalseIsTrue) {

}

