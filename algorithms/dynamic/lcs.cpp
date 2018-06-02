#include <vector>
#include <iostream>
#include <set>

/*

We can to do this with brute force... 

But if we use an unordered map



*/


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





int longestConsecutive(std::vector<int>& nums){
	std::set<int> set;
}


int main(){

	std::vector<int> array = {2,1,6,9,4,3};
	// The output should be 4.. because the consecutive subsequence is [1,2,3,4]

}
