/*

This is the least common ancestor problem for the binary tree.  





*/

#include "BinaryTree.h"
#include <iostream>


int main(){

	BinarySearchTree<int> bst;
	
	bst.insert(3);
	bst.insert(5);
	bst.insert(4);

	bst.insert(9);
	bst.insert(12);
	bst.insert(8);
	std::cout << "Is the bst empty? " << bst.isEmpty() << std::endl;


	bst.print_inorder();
}
