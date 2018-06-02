/*

Givn an array of integers move all zeroes present in the array to the end and return the same array..  How would you to this inplace?



*/

#include <iostream>
#include <vector>

/*

Find the index of the next non zero element
*/
int findnz(int i, std::vector<int> array){
	while(i < array.size() && array[i] ==0)
		i++;
	return i;
}





void move_zeroes(std::vector<int> &array){
	int j;

	for(int i=0; i < array.size(); i++){
		if(array[i] == 0){		
			j = findnz(i,array);
			if(j<array.size()){
				std::swap(array[i], array[j]);
			}
		}
	}
}

void print_array(std::vector<int> array){

	for(int i=0; i < array.size(); i++){
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

}

int main(){


	std::vector<int> array = {0,1,2,0,3,0,0,0,6};
	std::swap(array[0], array[1]);
	print_array(array);
	move_zeroes(array);
	print_array(array);

	
}
