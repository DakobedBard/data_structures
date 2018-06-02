/*

Given an array of numbers, find the length of the longest consecutive sequence in the array. 

array = {2,1,6,9,4,3,5,12,51};

the length of the LCS is 6 because [1,2,3,4,5,6] is found in the array..






We can to do this with brute force... 

This has time complexity O(n^3)

The outer loop runs exactly n times, and because currentNum increments by 1 during each iteration of the while loop, it runs in o(n) time.  Then on each iteration of the while loop we call arrayContains which loops over the array once again.  Three nested O(n) loops which compount multiplicatively to a cubin runtime.

Space complexity: o(1)

Brute for algorityhm only allocates a handful of integers so it uses constant additional space
*/

#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

bool arrayContains(std::vector<int>& array, int num){
	for(int i=0; i < array.size(); i++){
		if(array[i] == num)
			return true;
	}
	return false;
}

int BruteForce(std::vector<int>& array){
	int longestStreak =0;
	int currentNum;
	int currentStreak;	
	for(int i =0; i < array.size(); i++){
		currentNum = array[i];
		currentStreak =1;
		while(arrayContains(array, currentNum+1)){
			currentNum += 1;
			currentStreak++;
		}
		longestStreak = std::max(longestStreak, currentStreak);
	
	}
	return longestStreak;

}


/*
A second approach would be to sort the array.  

*/

void print_array(std::vector<int> array){
	for(int i=0; i < array.size(); i++){
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

/*

This is from leetcode problem 128



*/


int sortedLCS(std::vector<int> array){

	if(array.size() == 0){
		return 0;
	}

	std::sort(array.begin(), array.end());					// Make use of the std::sort function
	print_array(array);
	int longestStreak = 1;
	int currentStreak =1;

	for(int i=2; i < array.size(); i++){
		if(array[i] != array[i-1]){
			if(array[i] == array[i-1]+1){

				currentStreak++;
			}else{
				longestStreak = std::max(longestStreak, currentStreak);
				currentStreak = 1;
			}
		}

	}
	return std::max(longestStreak, currentStreak);






}
/*

Numbers are stored in a set to allow O(1) lookups, and we only attempt to build sequences from numbers that are not already part of a longer sequence... This is accomplished by first ensuring that the number would imddediately precede the current number in a seuqnce is not present, as that number would necessarily be part of a longer sequence..  



*/




int longestConsecutive(std::vector<int>& nums){
	std::set<int> set;
}


int main(){

	std::vector<int> array = {2,1,4,5,6,3,8};
	int a = sortedLCS(array);
	std::cout << "The longest streak in this array is " << a << std::endl;

	// The output should be 4.. because the consecutive subsequence is [1,2,3,4]

}
