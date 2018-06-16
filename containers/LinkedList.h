/*

This is my implementation of LinkedList...

Currently, while dope it is kind of stupid that my nodes are an external class but so be it.. 

-- Write an Iterator...

-- Reverse -

-- Merge.. 

-- Remove an element, Remove all elements with value..


-- Search for an element... 
	I was able to do this easily with recursion... But I had a little difficuly getting this to work correctly returning bools and instead opted to return an int of value 0 or 1 depending on wether or not the item is in the list.  

Should I return a pointer to the node itself... ?? 

Need to write a destructor method for this linked list.  We have alloated memorory to new nodes using new, must use delete.  


*/

#include <iostream>
#include <vector>

int dumb(){
	return 1;
}

template <class T>
class Node{
  public: 

	T data;
	Node<T> *next;
	Node<T>(const T& data_):data(data_), next(){}
	Node<T>(const Node<T>& copyNode): data(copyNode.data), next(){}

};


template <class T>
class LinkedList{
  public:
	Node<T> *head;
	Node<T> *tail;
	LinkedList(Node<T> * newNode):head(newNode), tail(newNode){}
	 LinkedList():head(NULL), tail(NULL){
		std::cout << " I got called ";
	}
	void print();
	int InsertTail(T val);
	int InsertHead(T val);
	int size;
	T front(){
		return (*head).data;
	}	
	T end(){
		return (*tail).data;
	}
	void remove(T val);
	int search(T val);
	int search(T val, Node<T>* node);
	bool deletion(T val);
	bool deletion(T val, Node<T>* node);
};
/*
In order to remove an element from the Linked List we will have to find that value, and then change the previous nodes pointer

Iterate through the linked list.. 

Can we assume that the values in the linked list are unique?  Because if so we can just iterate through and return once we find the value and change the pointers around... 


*/

/*
Recursively search the linked list

*/


template <class T>
int LinkedList<T>::search(T val){

	 return search(val, head);
}	


template <class T>
int LinkedList<T>::search(T val, Node<T>* node){
	
	if(node == NULL){
		return 0;
	}

	std::cout << "I get called and the heads data is " << node->data << std::endl;
	if(node->data == val){
		std::cout << "I am here and the nodes data is " << node->data << " and the value is " << val << std::endl;
		return 1;
	}
	search(val, node->next);
}

/*


*/

template <class T>
bool LinkedList<T>::deletion(T val){
	return deletion(val, head);
}

template <class T>
bool LinkedList<T>::deletion(T val, Node<T>* node){

}



template <class T>
void LinkedList<T>::remove(T val){
	Node<T> * node = head;
	Node<T> * prev = head;		// Iterate through the linked list...
	while(node !=NULL){
		std::cout << "I am at " << node->data << std::endl;
		node = node->next;
		prev = node;
		if(node->data == val){

		}
	}
}



template <class T>
void LinkedList<T>::print(){
	Node<T> *current_node = head;
	while(current_node){
		std::cout << current_node->data<< "-->";
		current_node = current_node->next;

	}	

	std::cout<<"NULL"<< std::endl;
}

template <class T>
int LinkedList<T>::InsertTail(T data){
	Node<T> *new_node = new Node<T>(data);
	if(tail == NULL){
		head = new_node;
		tail = new_node;
		return 0;
	}
	tail->next = new_node;
	tail = tail->next;
	size++;

	return 0;

}
template <class T>
int LinkedList<T>::InsertHead(T data){
	Node<T> new_node = new Node<T>(data);
	return 1;

}


/*

This is adding a 1 to the begnninning of the merged linked_list.... pretty ugly..


*/


template <class T>
LinkedList<T> mergeTwoLists(LinkedList<T>* firstlist, LinkedList<T>* secondlist){
	LinkedList<T> merged_list(new Node<T>(1));
	//LinkedList<DataType> merged_list();
	Node<T>* tail1 = firstlist->head;
	Node<T>* tail2 = secondlist->head;

	while(tail1 != NULL && tail2 != NULL){
		

		if(tail1->data < tail2->data){
			merged_list.InsertTail(tail1->data);
			tail1 = tail1->next;
		}else{
			merged_list.InsertTail(tail2->data);
			tail2 = tail2->next;
		}
	}
/*
At this point atleast one of the input lists has no more elements in it.  Append to the list the remaining elements of the list with elements remaining.  


*/
	while(tail1 != NULL){
		merged_list.InsertTail(tail1->data);		
		tail1 = tail1->next;
	}

	while(tail2 !=NULL){
		merged_list.InsertTail(tail2->data);
		tail2 = tail2->next;	
	}

	return merged_list;

}
/*
template <class DataType>
LinkedList<T> mergeKLists(std::vector<LinkedList<T>> list_array){

	LinkedList<T> merged_list(new Node<T>(1));

	std::cout << "The length of the vector is " << list_array.size() << std::endl;

	while(list_array.size() >1){
		list_array.push_back(mergeTwoLists(&list_array[0],&list_array[1]));
		list_array.erase(list_array.begin());
		list_array.erase(list_array.begin());

	}
	merged_list = list_array.front();
	return merged_list;

}


template <class DataType>
bool detectCycle_Hash(LinkedList<T>* list){

	return false;
}

template <class DataType>
bool detectCycle_TwoPointers(LinkedList<T>* list){

	return false;
}
*/


