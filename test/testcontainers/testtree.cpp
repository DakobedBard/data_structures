/*

Here we will define unit tests for our BinaryTree and BinarySearchTree.  



*/



#include "BinaryTree.h"
#include "testtree.h"
#include "Trees.h"



using ::testing::Return;

using namespace DTL;

TreeTest::TreeTest() {
  
}

TreeTest::~TreeTest() {};

void TreeTest::SetUp() {};

void TreeTest::TearDown() {};

/*

This test case will test the functionality of the insertion and deletion operations of the BST.  



*/


TEST_F(TreeTest, BinarySearchTreeTest) {
	BinarySearchTree<int> bst;

}

// This test case will test the functionality of the InOrderTraversal ... 
/*


		3
	       / \
	      6   8 

Test the inorder traversal method 

Inorder traversal of a binary search tree will be in sorted ascending order...
*/

TEST_F(TreeTest, TestInOrderTraversal) {
	BinarySearchTree<int> bst;
	bst.insert(6);
	bst.insert(3);
	bst.insert(8);std::cout << "inorder traversal " << std::endl;
	bst.insert(14);
	bst.insert(2);
	bst.insert(23);
	bst.insert(5);
	bst.print_inorder();
	std::cout << "preorder traversal " << std::endl;
	

}

/*

Remove the element from the bst.

Test that the tree is empty after inserting and then deleting elements.. 

*/
TEST_F(TreeTest, TestDeletion) {

		BinarySearchTree<int> bst;
	bst.insert(6);
	bst.insert(3);
	
	bst.insert(14);
	bst.insert(2);
	bst.insert(23);
	bst.insert(5);
	bst.insert(8);std::cout << "inorder traversal before removing element 5 " << std::endl;
	bst.print_inorder();
	bst.insert(8);std::cout << "inorder traversal after removing element 5 " << std::endl;
	bst.remove(5);
	bst.print_inorder();
	

}


/*

This is is a geeks for geeks problem

Input : K = 3	 sum of 3 largest elements is 32
              8
            /   \
           7     10
         /      /   \
        2      9     13


A simple solution would be to do inorder traversal and then sum the k last elements.. but this would require 
an entire traversal of the tree.  That is bad.

Instead let us do a reverse inorder traversal to get the k largest elements of the tree.  
When we did inorder traversal 

Where would I iplement this... this is seems to be a case where we want to inherit a integer tree and define the function right here... Of course i would rather do this in another directory but I can always move this later..

I suppose if our type T overloads the + operator... we could determine the sum of a generic class as well.  

*/

class IntBST: public BinarySearchTree<int>{

  public:
	int klargestElementSumUtil(Node* root, int k, int& c){
		if(root==NULL)			// base case
			return 0;
		if(c>k)		
			return 0;
		// Compute sum of elements in right subtree
		int ans = klargestElementSumUtil(root->right, k, c);
		if(c >= k)
			return ans;
		ans += root->data;
		c++;
		if(c >=k)
			return ans;

		return ans + klargestElementSumUtil(root->left, k, c);
	}
	int klargestElementSum(Node* root, int k){
		int c = 0;
		return klargestElementSumUtil(root, k, c);
	}	
};




TEST_F(TreeTest, SumKLargestTest) {


	IntBST bst;
	bst.insert(8);
	bst.insert(7);
	bst.insert(2);
	int sum = bst.klargestElementSum(bst.root, 1);
	ASSERT_EQ(sum,8);

	IntBST bst2;
	bst2.insert(8);
	bst2.insert(7);
	bst2.insert(10);
	bst2.insert(2);
	bst2.insert(9);
	bst2.insert(13);

	int sum2 = bst.klargestElementSum(bst2.root, 1);
	ASSERT_EQ(sum2,13);	

	int sum3 = bst.klargestElementSum(bst2.root, 2);
	ASSERT_EQ(sum3,23);
	int sum4 = bst.klargestElementSum(bst2.root, 4);
	ASSERT_EQ(sum4,40);

}


TEST_F(TreeTest, PreorderSuccessor) {



}


