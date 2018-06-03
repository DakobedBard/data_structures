/*

Implement a queue using two stacks.  



*/
#include <stack>


template <class DataType>
class Queue{

	

	std::stack<DataType> stackNewestOnTop;
	std::stack<DataType> stackOldestOnTop;
  public:
	Queue():stackNewestOnTop(), stackOldestOnTop(){
	
	}


	void enqueue(DataType data){

		// Move elements from stacknewest to stackOldest

		stackNewestOnTop.push(data);	
	

		// Move the elements back..	We might want to keep the elements in this order..
	}

	DataType peek(){		// Get oldest item 

		// move elements from stackNewest to Stack Oldest
		shiftStacks();
		return stackOldestOnTop.peek();

		
	}

	void shiftStacks(){
		if(stackOldestOnTop.isEmpty()){
			while(!stackOldestOnTop.isEmpty()){
				stackOldestOnTop.push(stackOldestOnTop.pop());
			}	
		}
	}

	DataType dequeue(){		// Get oldest item and remove it move elements from stack Newest to stackOldest

		DataType data = stackOldestOnTop.pop();


		return data;
	}

};


int main(){

}
