/*

Given an array of integers a[]

Practice with priority queues


return an array m[] of medians where m[i] = median of a[0] through a[i]

We could loop through the array, and for each index, we sort the preceding values, 

Brute Force O(n^2)




*/



/*

Continuous median...

Heap is perfect for this problem

We maintain a max heap of the bigger numbers, and a min heap of the smaller numbers...



*/

#include <vector>
#include <queue>
#include <iostream>

class myComparison{

	bool reverse;

  public:
	myComparison(const bool& revparam = false){
		reverse = revparam;
	}
	bool operator()(const int& lhs, const int &rhs) const{
		if(reverse) 
			return(lhs>rhs);
		else
			return (lhs<rhs);
	}


};


void add(std::priority_queue<int> &lowers, std::priority_queue<int, std::vector<int>, std::greater<int>> &highers , int num){
	//int top = lowers.top();


	// Before we make a comparison of these elements we have to make sure that we dont try to access an emtpy priority queue.
	// If both lowers and higher are empty... we will add to lowers by default

	if(lowers.size() == 0 && highers.size() ==0 ){
		lowers.push(num);
		return;
	}else if(lowers.size() != 0 | num < lowers.top()){
		lowers.push(num);
	}else {
		highers.push(num);
	}

//	std::cout << "The size of lowers is " << lowers.size() << std::endl;
//	std::cout << "The size of highers is "<< highers.size() << std::endl;

}


/*
This function rebalances the priority queues so that their size doesn't differy by 2.

*/
void rebalance(std::priority_queue<int> &lowers, std::priority_queue<int, std::vector<int>, std::greater<int>> &highers){
	std::priority_queue<int> biggerHeap;
	std::priority_queue<int> smallerHeap;
	int lowersize = lowers.size();
	int highersize = highers.size();
	
	int sizediff = lowers.size() - highers.size();		// A positive value means that the lowers PQ is larger than the highers PQ
	std::cout << " Before Rebalance lowers size: " << lowersize<< std::endl;
	std::cout << " Before Rebalance highers size: " << highersize << std::endl;
	//std::cout << " The sizediff between lowers and highers is " << sizediff << std::endl;
	if(sizediff >=2){					// lowers has 2 more elements than highers
		
	//	std::cout << "The lowers top element is " << lowers.top() << std::endl;

		highers.push(lowers.top());
		lowers.pop();
	//	std::cout << " During rebalance Rebalance lowers size: " << lowers.size()<< std::endl;
	//	std::cout << " During rebalance Rebalance highers size: " << highers.size()<< std::endl;
		
	}else if(sizediff <= -2){
		lowers.push(highers.top());
		highers.pop();
	}
	std::cout << " After Rebalance lowers size: " << lowers.size()<< std::endl;
	std::cout << " After Rebalance highers size: " << highers.size() << std::endl;

}

double getMedians(std::priority_queue<int> &lowers, std::priority_queue<int, std::vector<int>, std::greater<int>> &highers){

	int lowersize = lowers.size();
	int highersize = highers.size();
	int sizediff = lowers.size() - highers.size();
	
	if(sizediff ==0){
		return (double)(lowers.top() + highers.top())/2;
	}else{
		if(sizediff >0){			// the lowers PQ is larger..
			return lowers.top();
		}else{					// the highers PQ is larger..
			return highers.top();
		}
	
	}
	
	
}




std::vector<double> getMedians(std::vector<int> array){
	std::vector<double> medians(array.size(),0);
	std::priority_queue<int> lowers;
	std::priority_queue<int, std::vector<int>, std::greater<int>> highers;

	
	for(int i=0; i < array.size(); i++){
		int number = array[i];
	//	std::cout << "I am adding " << number << "to two PQs" << std::endl;
		add(lowers, highers, number);
		//add(lowers);
		rebalance(lowers, highers);
		medians[i] = getMedians(lowers, highers);
		std::cout << "The median at index i " << i <<  " is " <<  medians[i] << std::endl;
	}
	return medians;
}




/*
void addNumber(std::priority_queue<int> lowers, std::priority_queue<int> highers, int number){
	if(lowers.size() == 0 | number< lowers.top()){
		lowers.add(number);
	}


}
*/




int main(){

	int myints[] = {10,60,50,20};
	std::priority_queue<int> maxheap (myints,myints+4);

	std::priority_queue<int, std::vector<int>, std::greater<int>> minheap (myints,myints+4);

	typedef std::priority_queue<int,std::vector<int>,myComparison> mypq_type;

	mypq_type fourth;  // less than comparison..
	mypq_type fifth (myComparison(true)); // greater - than comparison..
	std::priority_queue<int> lowers;

	std::vector<int>  v = {4,6,3,10};
	std::vector<double> medians = getMedians(v);

	
	/*

	HAHA! it seems to work.  Learn from this... 	

	*/


/*

	int a = minheap.top();
	minheap.pop();
	std::cout << "The top element of the minheap  is " << a<< std::endl;
	
	int b = maxheap.top();
	std::cout << "The top element of the maxheap  is " << b<< std::endl;
*/

}
