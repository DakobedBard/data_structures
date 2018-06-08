/*

Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 

Input: 19
Output: true
Explanation: 
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

*/

#include <iostream>
#include <vector>

bool isHappy(int n) {
        int loop = 50;
        while(loop--)
        {
            int sum = 0;
            while(n != 0)
            {
                int a = n % 10;
                sum += a * a;
                n /= 10;
            }
            n = sum;
            if(n == 1)
                return true;
        }
        return false;
    }

int main(){
	std::cout << " is 19 a happy number " << isHappy(19) <<std::endl; 
}
