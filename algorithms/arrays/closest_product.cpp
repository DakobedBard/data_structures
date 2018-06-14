/*

Given an array of non negative integers and a number x, find a pair in array whose product is closest to x.  



*/


#include <vector>
#include <algorithm>
#include <iostream>
#include <limits.h>

/*
A simple solution to this would be to consider every pair and keep track of closest pair (absolute difference between pair productand x is minimum)  Finally return the closest pair.  O(n^2)

Method2:
1) Sort the array
2) Initialize a variable diff as MAX_INT
3) Traverse the array and for each , do the following:
	FInd the lower boud for x/arr[i]
	- FInd the upper bound for x/arr[i] in the sub array on right of arr[i] i.e in sub arry arr
	and let it be denoted I
	- Find the upper bound for x/arr[i] in the sub array on right of arr[i] let it be denoted u
	- IF min(abs((arr[i]*I-x), abs((arr[i]*u)-x)) < diff , then update diff and result


Method 3)

An efficient solution can find the pair in O(n) time

1) Initialize a variable diff as Infinite
2) Initialize two index variables l and r in the gien sorted array
	a) Initialize first to the leftmost index: l =0
	b) Initialize second the rightmost indx: r = n-1

3) Loop while l < r
	if abs(arr[l]*arr[r] - x) < diff
		update diff 
	Else if(arr[i]*arr[r] < x) then l++

	Else r--

*/

void print(std::vector<int> array){
	for(int i =0; i < array.size(); i++){
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

// Method 3


std::vector<int> cloestproduct(std::vector<int> array, int target){
	std::sort(array.begin(), array.begin()+4);
	
	int diff = INT_MAX;	
	int r =array.size()-1;
	int l =0;
	int l_res =0;
	int r_res =0;

	while(l < r){
		if(std::abs(array[l]*array[r]-target) < diff){
			diff = std::abs(array[l]*array[r]-target);
			l_res = l;
			r_res = r;
		}else if(std::abs(array[l]*array[r]) < target){
			l++;
		} 
		else
			r--;
	}

	std::vector<int> closest_pair = {array[l_res],array[r_res]};
	
	
	return closest_pair;
}



int main(){

	std::vector<int> v = {7,2,3,5,9};
	int x = 7;
	std::vector<int> output = cloestproduct(v, x);
	std::cout << "The output of our function ";
	print(output);
}
