/*

Write code that searches a 2D array for a specific value..

first convert the array to a vector.. because why the fuck not.  

Allright we can do this using the std::begin and std::end    functions

begin returns an iterator th te beginning of the 



*/

#include <vector>
#include <iostream>


bool search(std::vector<std::vector<int>>& matrix, int target){

	std::cout << "The size of the matrix is " << matrix.size() << std::endl;
	std::cout << "The size of the matrix[0] is " << matrix[0].size() << std::endl;


	for(int i=0; i < matrix.size(); i++){
		for(int j=0; j < matrix[0].size(); j++){
				if(matrix[i][j] == target)
					return true;
	
 				std::cout << " " << matrix[i][j] ;
		}

		std::cout << std::endl;

	}
	return false;
}

/*




Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.


[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]

We could probably write a slightly more efficient algorithm than the above ..

We will use a while loop...

Start at the first row and the last row..


*/


bool searchMatrix(std::vector<std::vector<int>>& matrix, int target){

	int m = matrix.size();
	if(m==0)
		return false;
	int n = matrix[0].size();

	int i =0, j = n-1;

	while(i < m && j >=0){

		if(matrix[i][j] == target)
			return true;
		else if(matrix[i][j] > target){
			j--;
		}
		else{
			i++;
		}

	}


	return false;

}



int main(){


	int array[5][5] = {{ 1, 4,7,11,15},
	{2,5,8,12,19},
	{3,6,9,16,22},
	{10,13,14,17,24},
	{18,21,23,26,30}
	};


	//std::vector<std::vector<int>> vec = {   std::vector<int>(std::begin(array[0]),std::end(array[0])),
	//				std::vector<int>(std::begin(array[1]),std::end(array[1]))};

	std::vector<std::vector<int>> vec {{ 1, 4,7,11,15},
	{2,5,8,12,19},
	{3,6,9,16,22},
	{10,13,14,17,24},
	{18,21,23,26,30}
	};



	bool found =search(vec, 3);
	//std::cout << "Is 3 in the matrix " << search(vec, 70) << std::endl;


	std::vector<std::vector<int>> v = {{1,4,7,11,15},
				{2,5,8,12,19},
				{3,6,9,16,22},
				{12,13,13,17,24},
				{18,21,23,26,30}
				};

	bool foundII = searchMatrix(v, 55);

	
	std::cout << "Is 55 in the matrix " << foundII << std::endl;

}
