/*

Here we will define unit tests for our LinkedList  

What are some algorithms to work on??

Merge K lists.. 

Reverse... Test these out

*/



#include "LinkedList.h"
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

TEST_F(ListTest, ReverseList) {


	
}

TEST_F(ListTest, InsertionTest) {
	LinkedList<int> list;
	list.insert_tail(5);
	std::cout << " I am in the list test " << std::endl;  
	ASSERT_EQ(0,1);
}

TEST_F(ListTest, DeleteNodeTest) {

}

