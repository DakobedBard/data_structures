/*

Here we will define unit tests for our BinaryTree and BinarySearchTree.  



*/



#include "BinaryTree.h"
#include "testtree.h"



using ::testing::Return;

TreeTest::TreeTest() {
    // Have qux return true by default
    ON_CALL(m_bar,qux()).WillByDefault(Return(true));
    // Have norf return false by default
    ON_CALL(m_bar,norf()).WillByDefault(Return(false));
}

TreeTest::~TreeTest() {};

void TreeTest::SetUp() {};

void TreeTest::TearDown() {};


TEST_F(TreeTest, BinaryTree) {

}

TEST_F(TreeTest, SometimesBazFalseIsTrue) {

}

