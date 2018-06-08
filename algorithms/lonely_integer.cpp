/*
Given an array of integers where every number appears twice except for one..

We could obvioulsy use a HashMap...

How can we reduce the space complexity of this..

We are going to try to use bits..


v = {9,1,2,3,2,9,1,7,7}




Think of this in a binary representation ...

v {	9	1001
	1	0001
	2	0010
	3	0011
	2	0010
	9	1001
	7	0111
	7	0111

}

Look at the last columns of the binary representation... If each element appeared twice, then we would have an even number of ones..

Take a look at the next column to the left...


Wow this stupid bit maniputlation algorithm actually worked..... 

*/

#include <vector>
#include <iostream>

int lonelyIntegwer(std::vector<int> array){

	int results =0;
	for(int i=0; i < array.size(); i++){
		int value = array[i];

		results ^= value;
	}

	return results;
}



int main(){

	std::vector<int> v  = {9,1,2,3,2,9,1,7,7};
	std::cout << "the lonely integer of v is.. " << lonelyIntegwer(v) << std::endl; 

}
