/*

It would be cool if the BinarySearchTree inherited from the BinaryTree class at some point...

Also implement Binary search given an array.  

That sounds like kind of a pain in the ass though... but I will do it eventually.


I NEED TO WRITE A FUNCTION THAT DELETES AN ELEMENT FROM THE BST

Can i search the fucking tree for an element ??

*/


#ifndef _DTL_BINARYTREE_H_
#define _DTL_BINARYTREE_H_

#include <iostream>
#include <vector>



namespace DTL{


template<class T>
class BinaryTree{


};




template <class T>
class BinarySearchTree{
	int size;
  public:
	struct Node{
		Node* left;
		Node* right;
		T data;

		Node(T data_):left(nullptr),right(nullptr),data(data_){}	

	};
	
	Node* root;
	BinarySearchTree(){
		root = nullptr;
	}
	BinarySearchTree(std::vector<T> array);
	bool isEmpty() const { return root == nullptr;}
	void print_inorder();
	void inorder(Node* node);
	void insert(T data);
	void print_preorder();
	void preorder(Node* node);
	void print_postorder();
	void postorder(Node* node);
	bool search(T data);
	bool remove(T data);
	int getsize () const{return size;}
	std::vector<T> inorder_array();
	

  private:
	void CreateBST(std::vector<T> array){
	
	}

};

template <class T>
BinarySearchTree<T>::BinarySearchTree(std::vector<T> array){


}

/*

I need to implement a function that removes an element from the BST

I am going to have to find this node.. so traverse the tree until you encounter value..

Then once we find it we keep track of the previous node... and the change the previous node's left or right pointer, depending on wether data is greather than or less than the parents data.. 

When we remove the minimum element.. We would make changes directly to the root.  Make one of roots children 


*/



template<class T>
bool BinarySearchTree<T>::remove(T data){
	if(root==nullptr){		// No elements in the BST
		return 0;		// The tree is empty bu we did not find the element that we asked to remove
	}
	bool found = false;
	Node* current = root;
	Node* prev = nullptr;
	while(current != nullptr){	// At each step we have to check if current->data == data
		if(current->data == data){		
			found = true;
			break;
			
		}else{
			prev = current;
			if(data < current->data)
				current = current->left;	
			else
				current = current->right;
		}
	}
	if(!found){
		std::cout<< " Data not found" << std::endl;
		return false;	
	}
	size--;		// decrement the size 

/*

There are three scenarios when we are deleting a node.. The could have 0 children, 1 child, and 2 children

when there are 0 children, its easy. we just set the approriate pointer in previous to null

when there is 1 child, move the pointer of the previous node to the child of the current node

when there are 2 children


*/

// Node with single child

	if((current->left==nullptr && current->right != nullptr) || (current->left!=nullptr && current->right == nullptr)){
		if(current->left==nullptr && current->right!=nullptr){

			if(prev->left == current){
				prev->left = current->right;
				delete current;
			}
			else{
				prev->left = current->right;
				delete current;
			}
		}else{
			if(prev->left == current){
				prev->left=current->left;
				delete current;
			}
			else{
				prev->right = current->left;
				delete current;
			}	

		}
		return true;


	}

	if((current->left ==nullptr && current->right==nullptr)){

		if(prev == nullptr){
			delete current;
		}else{

			if(prev->left == current) 
				prev->left = nullptr;
			else
				prev->right = nullptr;
			delete current;
			return true;
		}
	}


	/*
Node with 2 children.  Replace the node with the smallest value in the right subtree..

	*/
	if(current->left != nullptr && current->right != nullptr){
		Node* chkr = current->right;
		if((chkr->left == nullptr) &&(chkr->right == nullptr)){
			current = chkr;
			delete chkr;
			current->right = nullptr;
		}
		else{	//right child has children, if the node's right child has a left hild move all the way down left to locate the smallest element
			if((current->right)->left != nullptr){
				Node* lcurr;
				Node* lcurrp;
				lcurrp = (current->right)->left;
				lcurr= (current->right)->left;
				while(lcurr->left != nullptr){
					lcurrp = lcurr;
					lcurr = lcurr->left;
				}
				current->data = lcurr->data;
				delete lcurr;
				lcurrp->left = nullptr;
				
			}else{

				Node* tmp;
				tmp = current->right;
				current->data = tmp->data;
				current->right = tmp->right;
				delete tmp;
			}			
		}
	}
}




template<class T>
void BinarySearchTree<T>::insert(T data){
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
	size++;	
}

/*

We have implemented a search function that uses a while loop...


I should try to search the BST using recursion.  


*/





template<class T>
bool BinarySearchTree<T>::search(T data){
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



template<class T>
void BinarySearchTree<T>::print_inorder(){

	inorder(root);
	std::cout << std::endl;

}


template<class T>
std::vector<T> BinarySearchTree<T>::inorder_array(){


}

/*
This function will return an array of the inorder traversal... 

*/




template<class T>
void BinarySearchTree<T>::inorder(Node* node){

	if(node != nullptr){

		if(node->left != nullptr)
			inorder(node->left);
		std::cout << node->data << " " ;
		if(node->right != nullptr)
			inorder(node->right);
	}

	else return;

}


template<class T>
void BinarySearchTree<T>::print_preorder(){
	preorder(root);
}



template<class T>
void BinarySearchTree<T>::preorder(Node *node){

	if(node != nullptr){
		std::cout << " " << node->data << " ";
		if(node->left != nullptr)
			preorder(node->left);
		if(node->right != nullptr)
			preorder(node->right);
	}else
		return;

}

template<class T>
void BinarySearchTree<T>::print_postorder(){


	postorder(root);
}

template<class T>
void BinarySearchTree<T>::postorder(Node* node){

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

