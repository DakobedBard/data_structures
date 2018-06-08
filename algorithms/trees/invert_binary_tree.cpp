/*


Given a binary tree, invert it  (mirror)

     4
   /   \
  2     7
 / \   / \
1   3 6   9


    4
   /   \
  7     2
 / \   / \
9   6 3   1


This question asks us to invert a binary tree.  Fir

Additionaly I would like to solve the problem of level order traversal for a tree.

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

For solving both of these problems, I Need to create a binary tree... 




*/
#include <vector>
#include <iostream>
#include <unordered_map>
#include <string>

template <class T>
class BinaryTree{

  private:
	template <class T1>
	class Node{
	  public:
		T1 data;
		Node<T>* left;
		Node<T>* right;

		Node(T1 data_):data(data_), left(nullptr), right(nullptr){}

			

	};
	int size;
	Node<T>* insertLevelOrder(std::vector<T> array, Node<T>* root, int i);
	Node<T>* root;
	void mirror(Node<T>* node);
  public:
	BinaryTree(){}
	BinaryTree(std::vector<T> array);
	//void mirror();

	void mirror(){
		mirror(root);
	}
	
	int getSize(){
		return size;
	}


};

/*

This constructor will construct the binary tree.. So first we will loop through the array..... 

What is my Null condition?? ... I suppose 0 is my condition for now

Do we use the indices??

*/

template <class T>
BinaryTree<T>::BinaryTree(std::vector<T> array){

	insertLevelOrder(array, root, 0);


}

/*


I suppose we coudl do this iteratively...

Loop through the array.. check if 2*i + 1 and 2*i + 1 



*/


template <class T>
BinaryTree<T>::Node<T>* BinaryTree<T>::insertLevelOrder(std::vector<T> array, Node<T>* node, int i){
	

	if(i == 0){					// Then the node being passed is the root...
		Node<T> *root = new Node<T>(array[i]);
	}

	
	
	/*
	if(i < array.size()){

		Node<T>* temp = new Node<T>(array[i]);

		node = temp;
		node->left = insertLevelOrder(array,node->left,2*+1);
		node->right = insertLevelOrder(array,node->right, 2 * i + 2);		
		
	}
	return node;
	*/
}


void print(std::vector<int> array){
	for(int i=0; i < array.size(); i++){
		if(array[i] == 0)
			std::cout << " NULL " ;
		else	
			std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}






int main(){
	
  
	std::vector<int> v = {1,3,2,NULL,NULL,5,4};
	
	BinaryTree<int> tree(v);
}









