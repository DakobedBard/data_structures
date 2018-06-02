/*

This is an Amazon interview question

Count ways to reach the n'th stair


There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top.

Input: n = 1
Output: 1
There is only one way to climb 1 stair

Input: n = 2
Output: 2
There are two ways: (1, 1) and (2)

Input: n = 4
Output: 5
(1, 1, 1, 1), (1, 1, 2), (2, 1, 1), (1, 2, 1), (2, 2)

Recursion!

THe person can reach the n'th stair frmo either (n-1)th stair or from (n-2)th stair.  Let the total number of ways to reach n'th stair be 'ways(n)'.  The value of ways(n)
can be written as

	ways(n) = ways(n-1) + ways(n-2)


	ways(1) = fib(2) = 1
ways(2) = fib(3) = 2
ways(3) = fib(4) = 3



*/

int fib(int n){
	if(n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}

int countWays(int s){
	return fib(s + 1);
}



#include <iostream>


int main(){
	int s = 4; 
	std::cout << "Number of ways " << countWays(s) <<std::endl;



}
