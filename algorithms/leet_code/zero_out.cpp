/*
Given a M x N matrix, if we encounter a 0 zero out the whole row and the whole column.  



This is in the cracking the coding interview book

This could be easily done by iterating through the entire array but this is a bad idea.

Better Idea:  Iterate through array once flagging which rows and which columns need to be deleted..


*/

#include <vector>
#include <iostream>
#include <list>
#include <set>


void printlist(std::list<int> l){
	std::list<int>::iterator it;
	for(it = l.begin(); it!=l.end(); ++it)
		std::cout<<'\t' << *it;
	std::cout << std::endl;

}

void printset(std::set<int> s){
	std::set<int>::iterator iter;
	for(iter=s.begin();iter!=s.end();++iter){
		std::cout << "\t" << *iter; 
	}
	std::cout << std::endl;

}	
void zero_out_col(std::vector<std::vector<int>> &array, int c){

	for(int row =0; row < array.size(); row++){
		array[row][c] = 0;
	}

}

void zero_out_row(std::vector<std::vector<int>> &array, int r){
	for(int col =0; col < array[0].size(); col++){
		array[r][col] = 0;
	}

}


void zero_out(std::vector<std::vector<int>> &array){

	int m = array.size();
	int n = array[0].size();

	std::set<int> delcol;
	std::set<int> delrow;
	
	for(int i=0; i < m; i ++){
		for(int j=0; j < n ; j++){
			if(array[i][j] == 0){
				delcol.insert(j);
				delrow.insert(i);
			}
		}
	}	
	std::cout << "The columns to be deleted are  " << std::endl;
	printset(delcol);
	std::cout << "The rows to be deleted are  " << std::endl;
	printset(delrow);
	// Iterate through the elements in the 

	std::set<int>::iterator it;
	for(it = delcol.begin(); it!=delcol.end();it++){
		zero_out_col(array,*it);
	}
	std::set<int>::iterator rowit;
	for(rowit = delrow.begin(); rowit!=delrow.end();rowit++){
		zero_out_row(array,*rowit);
	}
}





void print(std::vector<std::vector<int>> array){
	for(int i =0; i < array.size(); i++){
		for(int j=0; j  < array[1].size(); j++){
			std:: cout << " " << array[i][j];
		}
		std::cout << std::endl;
	}
}




int main(){

	std::vector<std::vector<int>> v = {{0,6,2,0},		
					  {2,5,3,3},
 		        		  {2,5,3,3}, 
					  {2,5,3,3}
					};

	std::list<int> delcol;
	
	print(v);
	zero_out(v);
	print(v);

}
