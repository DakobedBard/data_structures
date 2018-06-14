/*

Assume ou have a method isSubString which checks if one string is a substring of another.  Given two strings s1 and s2, write a function to check if s2 is a rotation of s1.  So for example

s1 = "waterbottle"
s2 = "erbottlewat"  s2 is a is a rotation of s1.  

We might be able to to use the std::string::find function 

write a function that determines 



*/

#include <vector>
#include <string>
#include <iostream>

int main(){

	std::string s1 = "water";
	std::string s2 = "yate";

	if(s1.find(s2) != std::string::npos){
		std::cout << "s2 is a substr of s1" << std::endl;
	}else{
		std::cout << "s2 is not a substr of s1" << std::endl;
	}	
}
