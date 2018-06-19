/*
Let's call an array A a mountain if the following properties hold:

    A.length >= 3
    There exists some 0 < i < A.length - 1 such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1]

Given an array that is definitely a mountain, return any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] > ... > A[A.length - 1].

Example 1:

Input: [0,1,0]
Output: 1

Example 2:

Input: [0,2,1,0]
Output: 1


There are two methods we could do this in... the obvious one just loops over the array until we find the peak of the mountain the other uses binary search

*/

#include <vector>
#include <iostream>



int peakIndexInMountainArray(std::vector<int> &A){
	int i =0;
	while(A[i] < A[i+1])
		 i++;
	return i;
}

/*
How would we use binary search in this case?

The comparison A[i] < A[i+1] in a mountain array looks like [True, True, True, ..., True, False, False, ..., False]: 1 or more boolean Trues, followed by 1 or more boolean False. For example, in the mountain array [1, 2, 3, 4, 1], the comparisons A[i] < A[i+1] would be True, True, True, False.

We can binary search over this array of comparisons to find the largest index i such taht A[i] < A[i+1]

*/

int BinarySearchpeakIndexInMountainArray(std::vector<int> &A){
	int low = 0; int high = A.size()-1;
	while(low<high){
		std::cout << " I am looping " << std::endl;
		int mid = low +(high+low)/2;
		if(A[mid] < A[mid+1])
			low = mid+1;
		else
			high = mid;
	}
	return low;
}


int main(){

	std::vector<int> m1 = {0,1,0};
	std::vector<int> m2 = {0,2,1,0};
	std::vector<int> m3 = {0,2,5,9,6,4,2,1};
	std::cout << "The peak of the mountain m1 is at index " << peakIndexInMountainArray(m1) <<std::endl;
	std::cout << "The peak of the mountain m2 is at index " << peakIndexInMountainArray(m3) << std::endl;
	std::cout << "The peak of the mountain m1 is at index " << BinarySearchpeakIndexInMountainArray(m1) <<std::endl;
	std::cout << "The peak of the mountain m2 is at index " << BinarySearchpeakIndexInMountainArray(m3) << std::endl;
	
}
