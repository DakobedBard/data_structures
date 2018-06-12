#ifndef _DTL_HEAP_H_
#define _DTL_HEAP_H_
#include <functional>
#include <vector>
#include <iostream>

/*
A heap is a binary tree that is complteey filled with the possible exception of the bottom level.  

We saw heaps being used in the running medians problem... I should use this to implementation of it.  

Implement a decrease Key operation...

Can I test this with a max heap THis doesn't work... 

Now use this in djiksta...	3


*/

template <typename T, typename C = std::less<T>>
class Heap{
  public:
	Heap();
	Heap(int capacity_):capacity(capacity_),array(capacity_){
	
	}
	~Heap(){}
	void printHeap(){
		for(int i =0; i <  heapSize; i++){
			std::cout << " " << array[i] ;
		}
		std::cout << std::endl;
	}
	int insert(const T& t);

	static int left_child(int index){return 2*index;}
	static int right_child(int index){return 2*index +1;}
	static int parent(int index){return index/2;}
	void insertKey(T key);
	int index(T t);

	/*
Decrease key decreases the value of a key at index 'i' to new_val.  It is assumd that new_val is smaller than array[i]
	*/
	void decreaseKeyIndex(int i, T new_val);
	void decreaseKey(T oldval, T newval);	
	T getMin(){
		return array[0];
	}
	T extractMin();
  private:
	int capacity;
	int heapSize;
	std::vector<T> array;		// REturns the minimum key from min heap
		// Inserts a new key 'k'

	void MinHeapify(int i);

	void deleteKey(T t);
	
	

};

template<typename T, typename C>
int Heap<T, C>::index(T t){
	
	// WHat do I return if the value is outof bounds ?? NULL
	
	
	for(int i =0; i < array.size(); i++){
		if (array[i] == t){
			return i;
		}
	}
	

}

template<typename T, typename C >
void Heap<T, C>::decreaseKeyIndex(int i, T newval){
	array[i] = newval;
	while(i != 0 && array[parent(i)] > array[i]){
		std::swap(array[i], array[parent(i)]);
		i = parent(i);
	}

}

template<typename T, typename C >
void Heap<T, C>::decreaseKey(T oldval, T newval){

	int i = index(oldval);
	decreaseKeyIndex(i, newval);
}


template<typename T, typename C>
Heap<T, C>::Heap(){
	
}
template<typename T, typename C>
T Heap<T, C>::extractMin(){
	
	if(heapSize <= 0 ){

	}
	if(heapSize ==1){
		heapSize--;
		return array[0];
	}
	// Store the minium value, and remove it from the the heap

	T root = array[0];
	array[0] = array[heapSize-1];
	heapSize--;
	MinHeapify(0);
	return root;
}



template<typename T, typename C >
void Heap<T, C>::insertKey(T key){
	//std::cout << " I am inserting " << key << std::endl; 
	if(heapSize == capacity){
		std::cout << "Overflow COuld not insert Key " << std::endl;
	}
	heapSize++;
	int i = heapSize-1;
	array[i] = key;
	while(i != 0 && array[parent(i)]> array[i]){
		std::cout << "array[parent(i) " << array[parent(i)] << " parent(i) " << parent(i) << std::endl;
		std::swap(array[i], array[parent(i)]);
		i = parent(i);
	}
}


/*

We will recursively MinHeapify...
*/
template<typename T, typename C>
void Heap<T, C>::MinHeapify(int i){
	int l = left_child(i);
	int r = right_child(i);
	int smallest = i;
	if(l < heapSize && array[l] < array[i])
		smallest = r;
	if(r<heapSize && array[r] < array[smallest])
		smallest = r;
	if(smallest != i){
		std::swap(array[i], array[smallest]);
		MinHeapify(smallest);
	}
}



#endif
