#ifndef _DTL_ADJMATRIX_H_
#define _DTL_ADJMATRIX_H_

#include <vector>
#include <iostream>


template <class T>
class AdjMatrix{

  private:
	int V; 		// Numbef of edges
  	std::vector<std::vectorT>> adjmatrix;

  public:
	AdjMatrix(int V_):V(V_){}
	void print();
	int getV(){return V;}	
};


#endif;
