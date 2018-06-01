#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>
#include <stdexcept>

template <class DataType>
class Stack{
  public:
	
	Stack();		// Constructor
	~Stack();		// Destructor
	

	void push(DataType elem);
	DataType pop();

	struct Node{
		DataType data;
		DataType* next;
	};
	int getSize();
	int size;
	bool isEmpty();
	Node *head;
};


template <class DataType>
void Stack<DataType>::push(DataType elem){
	Node *newNode = new Node();
	newNode->data_ = elem;
	newNode->next = nullptr;
}

template<class DataType>
DataType Stack<DataType>::pop(){
	try{
		if(this->isEmpty() == false){
			Node *temp = this->head;
			this->head= this->head->next;
			this->size--;
		}else{
			throw std::out_of_range("The Stack Is Empty");
		}

	}catch(const std::out_of_range& e){
		std::cerr << e.what() << std::endl;
	}

	
}


#endif
