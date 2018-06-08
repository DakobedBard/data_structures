/*

Connected Cells Using DFS...

Find the ones that are adjacent to each other... DFS is perfect for this problem.

Walk through the matrix, whenever we encounter a one we perform DFS... 

I suppose I can implement this using my custom AdjMatrix class later... for now the graph is simply a 2d array t

*/


#include <vector>
#include <iostream>



class AdjMatrix{
  
  public:

	std::vector<std::vector<int>> matrix;

	AdjMatrix(std::vector<std::vector<int>> matrix_):matrix(matrix_){}


/*
	for(int row =0; row < matrix.size(); row++){
		for(int column =0; column < matrix[0].size(); column++){
			if(matrix[row][column] == 1){
				int a =2;
			//	int size = getRegionSize(matrix, row,column);
			}
		}
	}

*/

};

int getRegionSize(std::vector<std::vector<int>> &matrix, int row, int column){

	if(row<0| column <0 | row>=matrix.size() | column >= matrix[0].size())
		return 0;

	if(matrix[row][column] == 0)
		return 0;

	matrix[row][column]=0;

	int size = 1;
	for(int r = row -1; r <= row+1; r++){
		for(int c= column -1; c <= column+1; c++){
			if(r != row | c != column){
				size += getRegionSize(matrix,r,c);
			} 
		} 
	}

	return size;
}

int getBiggestRegion(std::vector<std::vector<int>> &matrix){
	int maxRegion =0;
	for(int row =0; row < matrix.size(); row++){
		for(int column =0; column < matrix[0].size(); column++){
			if(matrix[row][column] == 1){	
				int size = getRegionSize(matrix, row,column);
				maxRegion = std::max(size, maxRegion);	
			}
		}
	}
	return maxRegion;

}



int main(){

	std::vector<std::vector<int>> input = {{0,0,0,1,1,0,0},
						{0,1,0,0,1,1,0},
						{1,1,0,1,0,0,1},
						{0,0,0,0,0,1,0},
						{1,1,0,0,0,0,0},
						{0,0,0,1,0,0,0}
	};

	std::vector<std::vector<int>> input2 = {{1,1,0,0,0,0,0},
						{0,1,0,0,0,0,0},
						{0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0},
						{0,0,0,0,0,0,0}
	};



	int maxregion = getBiggestRegion(input2);

	std::cout << "The biggest region is " << maxregion << std::endl;
	AdjMatrix adjmat(input);

}
