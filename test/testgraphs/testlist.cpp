/*

Here we will define unit tests for our heap.  



*/



#include "Heap.h"
#include "testlist.h"



using ::testing::Return;

ListTest::ListTest() {
    // Have qux return true by default
    ON_CALL(m_bar,qux()).WillByDefault(Return(true));
    // Have norf return false by default
    ON_CALL(m_bar,norf()).WillByDefault(Return(false));
}

ListTest::~ListTest() {};

void ListTest::SetUp() {};

void ListTest::TearDown() {};

TEST_F(ListTest, SimpleListTest) {



}

TEST_F(ListTest, ByDefaultBazFalseIsFalse) {

}

TEST_F(ListTest, SometimesBazFalseIsTrue) {

}

