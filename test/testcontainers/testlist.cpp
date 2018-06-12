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

/*

How do I test the functionality of the LinkedList ?? 
Insert elements and then check that the head and tail elements are what they should be 

Delete elements in the Linked List... 

*/


TEST_F(ListTest, InsertionTest) {
	LinkedList<int> list;
	std::cout << " i see this " << std::endl;

	list.InsertTail(4);
	list.InsertTail(8);
	list.InsertTail(12);
	list.InsertTail(11);
	list.InsertTail(7);
	list.print();
	// I should have 4 at the front...
	ASSERT_EQ(list.front(),4);
	ASSERT_EQ(list.end(),7);

	list.remove(4);
	ASSERT_EQ(list.front(),7);
}

TEST_F(ListTest, DeleteNodeTest) {

}

