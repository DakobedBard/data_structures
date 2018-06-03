/*

Given a matrix of 1's and 0's.  Find the largest possible square made of just 1's.  

This is leetcode question 221

They provided two solutions, a brute force method and a DP method... lets try the brute force one first..



*/


#include <iostream>
#include <vector>

void print(std::vector<std::vector<int>> &array){

	


	for(int i =0; i < array.size(); i ++){
		for(int j=0; j < array[0].size(); j++){

			std::cout << " " << array[i][j] ;
		}

		std::cout << std::endl;
	}

}

/*
The brute force method is to find every possbile square of 1's that can be formed from within the matrix.  How do we go about this?


We use a variable to contain the size of the largest square found so far and another variable to store the size of the current. both initialized to 0;


int bruteForce(std::vector<std::vector<int>> &array)){
	int m = array.size();
	int n = array[0].size();
	


}
*/



/*

I'm not quite getting the correct answer for this!!



*/


int largestSquare(std::vector<std::vector<int>> &array){

	int m = array.size();
	int n = array[0].size();

	std::vector<std::vector<int>> dp(m+1, std::vector<int>(n+1,0));			// Initialize an empty array of 0's.  
	print(dp);
	std::cout << "m: " <<m << "  n: " << n << std::endl; 

	int maxsqlen = 0;

	for(int i =1; i < m; i++){
		for(int j=1; j < n; j++){
			if(array[i-1][j-1] == 1){
				dp[i][j] = std::min(std::min(dp[i][j-1], dp[i-1][j]), dp[i-1][j-1])+1;
				maxsqlen = std::max(maxsqlen, dp[i][j]);	
			}				
		}
	}

	return maxsqlen;
}


int main(){
	std::cout << "Array " << std::endl;


	std::vector<std::vector<int>> array = { {1,1,0,1,0},
					{0,1,1,1,0},
					{1,1,1,1,0},
					{0,1,1,1,1}};
	// The largest square of 1's we can create from the above double array is 3...

	print(array);


	int a = largestSquare(array);
	std::cout << "The largest square we can make from this matrix: " << a << std::endl;
}
