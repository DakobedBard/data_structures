/*

It would be cool if the BinarySearchTree inherited from the BinaryTree class at some point...

Also implement Binary search given an array.  

That sounds like kind of a pain in the ass though... but I will do it eventually.

*/


#ifndef _DTL_BINARYTREE_H_
#define _DTL_BINARYTREE_H_

#include <iostream>




namespace DTL{


template<class T>
class BinaryTree{


};




template <class DataType>
class BinarySearchTree{

  public:
	struct Node{
		Node* left;
		Node* right;
		DataType data;

		Node(DataType data_):left(nullptr),right(nullptr),data(data_){}	

	};
	
	Node* root;


  

	BinarySearchTree(){
		root = nullptr;
	}
	bool isEmpty() const { return root == nullptr;}
	void print_inorder();
	void inorder(Node* node);
	void insert(DataType data);
	void print_preorder();
	void preorder(Node* node);
	void print_postorder();
	void postorder(Node* node);
	bool search(DataType data);


};

template<class DataType>
void BinarySearchTree<DataType>::insert(DataType data){
	Node* node = new Node(data);
	Node* parent = nullptr;

	// Is the tree empty?

	if(isEmpty()){
		root = node;
	}else{
		Node* currentnode = root;
		while(currentnode!=nullptr){
			parent = currentnode;
			if(node->data > currentnode->data){
				currentnode = currentnode->right;
			}else{
				currentnode = currentnode->left;
			} 			
		}
		
		if(node->data < parent->data)
			parent->left = node;
		else
			parent->right = node;

	}	
}

/*

We have implemented a search function that uses a while loop...


I should try to search the BST using recursion.  


*/

template<class DataType>
bool BinarySearchTree<DataType>::search(DataType data){
	bool found = false;
	if(isEmpty()){
		std::cout << "The tree is emtpy.. data not found" << std::endl;
		return found;
	}
	
	std::cout << "i get here " << data << std::endl;
	Node* currentnode = root;
	Node* parentnode = nullptr;
	
	while(currentnode != nullptr){
		std::cout << "I am currentnodes data " << currentnode->data << std::endl; 

		if(currentnode->data == data){
			parentnode = currentnode;
			found = true;
			break;
		}else{
			parentnode = currentnode;
			if(data>currentnode->data)
				currentnode = currentnode->right;
			else
				currentnode = currentnode->left;
		}
	}

	if(!found)
		std::cout << "Data not found! " << std::endl;
	else
		std::cout <<"Data found" << std::endl;
	return found;	
}



template<class DataType>
void BinarySearchTree<DataType>::print_inorder(){

	inorder(root);
	std::cout << std::endl;

}

template<class DataType>
void BinarySearchTree<DataType>::inorder(Node* node){

	if(node != nullptr){

		if(node->left != nullptr)
			inorder(node->left);
		std::cout << node->data << " " ;
		if(node->right != nullptr)
			inorder(node->right);
	}

	else return;

}


template<class DataType>
void BinarySearchTree<DataType>::print_preorder(){
	preorder(root);
}



template<class DataType>
void BinarySearchTree<DataType>::preorder(Node *node){

	if(node != nullptr){
		std::cout << " " << node->data << " ";
		if(node->left != nullptr)
			preorder(node->left);
		if(node->right != nullptr)
			preorder(node->right);
	}else
		return;

}

template<class DataType>
void BinarySearchTree<DataType>::print_postorder(){


	postorder(root);
}

template<class DataType>
void BinarySearchTree<DataType>::postorder(Node* node){

	if(node != nullptr){
		std::cout << " " << node->data << " ";
		if(node->left != nullptr)
			preorder(node->left);

		if(node->right != nullptr)
			preorder(node->right);
		std::cout << " " << node->data << " " ;

	}else
		return;

}

}  // DTL

#endif  

