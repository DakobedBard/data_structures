/*

You are given an array of repeating numbers.  All numbers repeat in an even way, except for one.  Find that odd occuring number....



Array of integers... output is an integer that repeats in the array an odd number of times.  Iterate through the array, map each element to a count.    

This seemed very easy to do with an unordered_map.. 

What is this time complxity?

o(n) looping through the array and the unordered map is linear ...

space complxity:





*/

#include <vector>
#include <unordered_map>
#include <iostream>

int odd_repeats(std::vector<int> array){
	std::unordered_map<int, int> map;

	for(int i=0; i < array.size(); i++){
		map[array[i]]++;
	}

	
	for(auto it = map.begin(); it != map.end(); ++it){

		if(it->second % 2 != 0){
			return it->first;
		}

	}
	
	return 0;

}

int main(){


	std::vector<int> array = {1,4,6,4,1,4,4,1,1,6,7};

	std::cout <<"The element that repeats an odd number of times is " << odd_repeats(array) << std::endl;



	/*
		Now we check the map.. if the value for t
	*/

}
