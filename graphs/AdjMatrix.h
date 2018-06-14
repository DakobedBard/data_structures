#ifndef _DTL_ADJMATRIX_H_
#define _DTL_ADJMATRIX_H_

/*

Adjacency Matrix class..

Write code to convert between the two representations.. first I need to add tests.  



*/


#include <vector>
#include <iostream>


template <class T>
class AdjMatrix{

  private:
	int V; 		// Numbef of edges
  	std::vector<std::vector<T>> adjmatrix;

  public:
	AdjMatrix(int V_):V(V_){}
	void print();
	int getV(){return V;}	
};


template <class T>
void AdjMatrix<T>::print(){
	for(int i=0; i < V; i++){
		for(int j=0; j < V; j++){
	
			std::cout << adjmatrix[i][j] << " ";
		}
		std::cout << std::endl;
	}
}



#endif
