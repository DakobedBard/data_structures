/*

Given a matrix of 1's and 0's.  Find the largest possible square made of just 1's.  





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



int largestSquare(std::vector<std::vector<int>> &array){

	int m = array.size();
	int n = array[0].size();

	std::vector<std::vector<int>> cache(m, std::vector<int>(n,0));			// Initialize an empty array of 0's.  
	print(cache);
	std::cout << "m: " <<m << "  n: " << n << std::endl; 

	return 0;
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

}
