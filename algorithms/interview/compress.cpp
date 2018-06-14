/*

Given a string such as  aaabbccccaad

return a compressed string of the form	a3b2c4a2d1

This is a gnarly solution ... appending to strings is expensive... 

A better solution is to use a stringbuffer.  

*/

#include <string>
#include <iostream>

std::string compress(std::string inputstr){

	std::string newstr;
	int count =1;
	for(int i=1; i < inputstr.length(); i++){
		if(inputstr[i] == inputstr[i-1]){
			count++;
		}else{

			newstr = newstr + inputstr[i-1]+std::to_string(count);
			count = 1;
		}
	}
	newstr = newstr + inputstr[inputstr.length()-1]+std::to_string(count);
	

	return newstr;
}



int main(){

	std::string input = "aaabbccccge";
	std::cout << "The output string is.." <<  compress(input) << std::endl;
	
}
