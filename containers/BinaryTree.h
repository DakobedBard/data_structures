/*

It would be cool if the BinarySearchTree inherited from the BinaryTree class at some point...



*/

#include <iostream>


template <class DataType>
class BinarySearchTree{

  private:
	struct Node{
		Node* left;
		Node* right;
		DataType data;

		Node(DataType data_):left(nullptr),right(nullptr),data(data_){}	

	};
	
	Node* root;


  public:

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





