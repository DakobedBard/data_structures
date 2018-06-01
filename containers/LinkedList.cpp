#include "LinkedList.h"


template<class DataType>
int LinkedList<DataType>::getSize(){
		return size;
}





template <class DataType>
void LinkedList<DataType>::insert_head(DataType item){

	
	
	
}

/*

Insert an element to the tail of the LinkedList

*/

template <class DataType>
void LinkedList<DataType>::insert_tail(DataType item){
		
	
	Node<DataType> *new_node = new Node<DataType>(item);
		
	if(tail == nullptr){
		head = new_node;
		tail = new_node;
		return ;
	}
	
	tail->next = new_node;
	tail = tail->next;
	size++;
}

