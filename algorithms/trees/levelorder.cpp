/*

Given a Binary tree, return the level order traversal of its node's values .  (ie, from left to right level by level..)

Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7

return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]


This is LeetCode problem 102.

Okay in order to do this problem I really ought to define a proper Binary Tree...

I have a tempalted BST, now lets just do a templated binary tree

Convert between an array 


*/

#include <iostream>
#include <vector>
#include <queue>

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x): val(x), left(nullptr), right(nullptr){}

};
/*
The BinaryTree will have a method levelOrder()

BinaryTree will have a constructor that takes an array and constructs a binary tree out of it.

*/


class BinaryTree{
  private:
	class Node{
  	  public:
		int val;
		Node *left;
		Node *right;
		Node(int x): val(x), left(nullptr), right(nullptr){}

	};

  public:
	
	BinaryTree(){}
	BinaryTree(std::vector<int> array){}
	
	Node *root;

};

void inorder(TreeNode *root){

	if(root != nullptr){
		inorder(root->left);
		std::cout << root->val << " ";
		inorder(root->right);
	}

}


void vector_to_bst(std::vector<int> parent, int i, TreeNode *created[], TreeNode **root){

	// If this node is already created..

	if(created[i] != NULL)
		return;
	created[i] = new TreeNode(i);
	if(parent[i] == -1){
		*root = created[i];
		return;
	}
	

}




std::vector<std::vector<int>> levelOrder(TreeNode* root){
	std::queue<TreeNode*> nodes;
	std::queue<int> levels;
	std::vector<std::vector<int>> result;

	if(root == nullptr)
		return result;
	std::vector<int> tmp;

	int height =0;
	int h;

	TreeNode* currentnode = root;

	while(currentnode != nullptr || !nodes.empty()){
		if(!nodes.empty()){
			h = levels.front();
			std::cout << h << std::endl;

			while(!levels.empty() && levels.front() == h){
				levels.pop();
				currentnode = nodes.front();
				tmp.push_back(currentnode->val);
				nodes.pop();

				if(currentnode->left != nullptr){
					nodes.push(currentnode->left);
					levels.push(h+1);
				}
				if(currentnode->right != nullptr){
					nodes.push(currentnode->right);
					levels.push(h+1);
				}			
			}
		}else if(currentnode == root && nodes.empty() && result.empty()){
			nodes.push(currentnode);
			levels.push(height);
			height++;
		}else if(nodes.empty())
			break;
		
		

	}

	return result;
}

/*

How would one construct a Binary tree from an array...


*/

int main(){

	std::vector<int> v = {3,9,20,NULL,NULL,15,7};


	BinaryTree BT(v);

}
