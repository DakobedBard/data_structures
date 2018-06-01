#include <iostream>
#include "Graph.h"
#include <vector>
#include <math.h>
/*

We initialized a std::vector from an array of integers.. worth noting!

So write a function that creates all of the possible subsets... we will use recursion to do this..

There are 2^n subsets, for each item in the array, we have the choice of either including into a subet or not including it.  


Power Set: GeeksforGeeks tells me that the Power set P(S) of a set S is the set of all subsets of S.  



*/

void all_subsets(std::vector<int> &array){
	std::vector<int> subsets(array.size());

}


void helper(std::vector<int> &array, std::vector<int> &subset, int i){

	if(i == array.size()){

	}


}



void print_subsets(std::vector<int> array){

	for(int i=0; i < array.size(); i++){
		std::cout << array[i] << " " ;
	}
	std::cout << std::endl;
	
}

/*

We can also consider an iterative solution..

We call this a Power Set... GeeksForGeeks tives me the following implementation 

*/

void printPowerSet(std::vector<int> set){
	int size =set.size();
	int psize = pow(2,size)-1;
	
	for(int counter =0; counter < psize; counter++){
		for(int j=0; j < set.size(); j++){
			/*
				Check if jth bit in the counter is set if set then print jth element form set
		
			*/
			if(counter & (1<<j)){

				std::cout << set[j];
			}
			std::cout << std::endl;

		}
	}


	std::cout << "psize " << psize << std::endl;
}





int main(){

	int a[] = {1,2,5};
	
	// Given a vector..
	

	std::vector<int> myvector (a, a+sizeof(a)/sizeof(int));

	//std::cout << "The vectors size is " << myvector.size() << std::endl;

	printPowerSet(myvector);

	

}
