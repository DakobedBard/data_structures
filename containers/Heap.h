#ifndef _DTL_HEAP_H_
#define _DTL_HEAP_H_
#include <functional>
#include <vector>
#include <iostream>

/*

WOW!! never omit the virtual destructor.. I was receiving a pernicious segmentation fault due to not having a virtual destructor defined in my class.  While running the test cases, the first test case involving the Heap would pass, however the second would always fail.  This problem was resolved by defining (an empty) destructor.  I do not think that i need to explicitly define a better destructor than this because I do not make any calls to new.  

Okay I got another SEGMENTATION fault for not initializing the size member variable.  When I tried to access it while doing an insertion... I got a seg fault.  I'm not sure why this problem didn't turn up while running some of the other tests... 


Does a remove element function make sense in a heap?? 


*/


template <class T>
class Heap{
  public:
	Heap():size(0), capacity(50), array(50){}
	Heap(int capacity_):capacity(capacity_), array(capacity_), size(0){}
	virtual ~Heap(){}
	void insert(T key);
	static int left_child(int index){return 2*index;}
	static int right_child(int index){return 2*index +1;}
	static int parent(int index){return index/2;}
	T min(){
		return array[0];
	}
	T extractmin();
	void decreaseKeyIndex(int i, T newval);
	void decreaseKey(T oldval, T newval);
	int index(T t);
	void printHeap(){
		for(int i =0; i <  size; i++){
			std::cout << " " << array[i] ;
		}
		std::cout << std::endl;
	}
	int heapsize(){
		return size;
	}
	bool isEmpty(){
		return size == 0;
	}
	bool isInMinHeap(T t);
  private:
	std::vector<T> array;
	int capacity;
	int size;
	void MinHeapify(int i);
};


template <class T>
bool Heap<T>::isInMinHeap(T t){
	for(int i = 0; i < size; i++){
		if(array[i] == t){
			return true;
		}
	}
	return false;
}


template <class T>
void Heap<T>::MinHeapify(int i){
	int l = left_child(i);
	int r = right_child(i);
	int smallest = i;
	//std::cout<< "In Heapify" <<std::endl; 
	//printHeap();
	//std::cout << " Exitiing heapify " << std::endl;
	std::cout << std::endl;
	if(l < size && array[l] < array[i])
		smallest = l;
	if(r<size && array[r] < array[smallest])
		smallest = r;
	if(smallest != i){
		std::swap(array[i], array[smallest]);
		MinHeapify(smallest);
	}

}


template<class T>
void Heap<T>::insert(T key){
	if(size == capacity){
		std::cout << "Overflow could not insert key" << std::endl;
		return;
	}
	size++;
	int i = size -1;
	array[i]  = key;
	while(i != 0 && array[parent(i)]>array[i]){
		std::swap(array[i], array[parent(i)]);
		i = parent(i);
	}
}

// A hole is created at the first index of the array.  We move the last element in the heap to index 0.  Now when we
// remove an element from the heap we can either use recursion or a loop to percolate the hole down..
template<class T>
T Heap<T>::extractmin(){
	
	if(size == 0){
		std::cout << "The heap is empty" <<std::endl;
		T t;
		return t;
	}


	if(size == 1){
		size--;
		return array[0];
	}
	
	T returnvalue = array[0];
	std::swap(array[0] ,array[size-1]);
	size--;
	MinHeapify(0);
	return returnvalue;

}



template <class T >
void Heap<T>::decreaseKeyIndex(int i, T newval){
	array[i] = newval;
	while(i != 0 && array[parent(i)] > array[i]){
		std::swap(array[i], array[parent(i)]);
		i = parent(i);
	}

}

template <class T >
void Heap<T>::decreaseKey(T oldval, T newval){

	int i = index(oldval);
	decreaseKeyIndex(i, newval);
}

template<class T>
int Heap<T>::index(T t){
	
	// WHat do I return if the value is outof bounds ?? NULL
	
	for(int i =0; i < array.size(); i++){
		if (array[i] == t){
			return i;
		}
	}
}

// 
template <class T>
std::vector<T> heapsort(std::vector<T> &array){
	Heap<T> minheap(array.size());
	for(int i=0; i < array.size(); i++){
		minheap.insert(array[i]);
	}
	std::vector<T> output(array.size());
	for(int i =0; i < array.size(); i++){
		output[i] = minheap.extractmin();
	}	
	return output;
}




/*

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


//Decrease key decreases the value of a key at index 'i' to new_val.  It is assumd that new_val is smaller than array[i]
	
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

*/

#endif
