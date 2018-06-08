/*

This is my implementation of an adjacency matrix representation 


*/


#include <vector>
#include <iostream>

template <class T>
class AdjMatrix{
  private:
	int V; 			// Number of vertices
	std::vector<std::vector<T>> adjmatrix;
  public:
	AdjMatrix(int numV):V(numV){
		
		
	
	}

	int getV(){
		return V;
	}

	void print();

};


template <class T>
void AdjMatrix<T>::print(){
	for(int i=0; i < V; i++){
		for(int j=0; j < V; j++){

			std::cout  << adjmatrix[i][j] << " ";
		}	
		std::cout << std::endl;	
	}
}


class GraphNode{


};

void print(std::vector<std::vector<int>> matrix){
	int rowcount = matrix.size();
	std::cout << "number of rows " << rowcount << std::endl;

	for(int row=0; row < rowcount; row++){
		std::cout << "row .. " << row <<std::endl;
	/*	for(int column;column<rowcount; column++){
			std::cout << "row .. " << row << " column : " << column << std::endl;
			//std::cout << matrix[row][column];
		}	*/
		std::cout << std::endl;
	}
}




int main(){

	AdjMatrix<GraphNode> adjmat(5);
	std::vector<std::vector<int>> matrix(4,std::vector<int>(4,1));
	
	//std::cout << matrix[3][1] << std::endl;
	print(matrix);

}
