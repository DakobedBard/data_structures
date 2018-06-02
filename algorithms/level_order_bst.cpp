/*

Given a Binary Tree, print its values in level order such that there's a new line after every level




This looks like DFS of the BST..


We could also convert a BST to an array...

*/

#include "BinaryTree.h"

class BinaryNode{

  public:
  	int x;
	int level;
	
	BinaryNode(int x_, int level_):x(x_), level(level_){}

	friend bool operator > (const BinaryNode &b1, const BinaryNode &b2);	
	friend bool operator < (const BinaryNode &b1, const BinaryNode &b2);	
};


bool operator >(const BinaryNode &b1, const BinaryNode &b2){

	return b1.x > b2.x;

}


bool operator <(const BinaryNode &b1, const BinaryNode &b2){

	return b1.x < b2.x;

}

int main(){

	DTL::BinarySearchTree<BinaryNode> bst;

	BinaryNode node(6,0);
	bst.insert(node);

}
