/*

This is the least common ancestor problem for the binary tree.  

Would I implement this here or in the BST itself....

ahh... I coudl inherit from the BST LETS DO THAT SO I HAVE ACCESS TO ALL THE STUPID SHIT





*/

#include "BinaryTree.h"
#include <iostream>


/*

We can solve this problem several ways... 


*/


class LCAtree:public DTL::BinarySearchTree<int>{
  public:
	// Starting 
	int LCA(int root, int a, int b);




};


int LCAtree::LCA(int root, int a, int b){


	return 0;
}



int main(){

	LCAtree bst;
	//bool c = bst.search(2);
	//std::cout << "Is the bst empty? " << bst.isEmpty() << std::endl;
	bst.insert(10);
	bst.insert(5);
	bst.insert(4);
	bst.insert(2);
	bst.insert(7);
	bst.insert(12);
	bst.insert(11);
	bst.insert(16);
	bst.insert(16);

	bool b = bst.search(88);

	std::cout << "Is the element 5 in the bst?  " << b << std::endl;


	bst.LCA(0, 2, 5);


//	bst.print_preorder();
}
