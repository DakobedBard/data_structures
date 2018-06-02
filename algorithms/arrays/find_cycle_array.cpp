/*

Each element in the array corresponds to an index of the same array.  Use two pointer method to determine if there is a cycle in this array.

This guys is a geniurs lets roll come back to this one in a littel bit.  


*/

#include <vector>
#include <iostream>


bool cyclic(std::vector<int> array){

	int p=0;
	int q=0;

	while(true){

		//  Here we check that the pointers are not out of bounds, if so return false
		if(p< 0 | q<0|p>=array.size()|q>=array.size()){
			return false;
		}


		p = array[p];
	
		if(p==q)
			return true;
		if(p<0 | p>= array.size())
			return false;
		p = array[p];
		if(p==q)
			return true;

		q = array[q];
		if(p ==q)
			return true;


	}





	return false;
}


/*

Find the interesection between arrays.



*/




int main(){
	
	std::vector<int> input = {1,2,3,4,5,6};
	
	std::cout << "The array is cyclic: " << cyclic(input) << std::endl;



}
