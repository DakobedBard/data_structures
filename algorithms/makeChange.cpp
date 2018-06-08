
#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>

/*

We have an array of coin denominations (halddollar = 50 quater = 25, dime = 10 etc).

Given a value, return how many ways we can that value using our coins

makeChange(27, {25,10,4,1})
	
	0 quarters
		makeChange(27,{10,5,1}
		0 dimes
			makeChange(27, {5,1|})
		1 dime
			makeChange(17 {5,1|})
		2 dimes
			makeChange( 7{5,1|})
	1 quarter
		makeChange(2, {10,5,1})


We can apply DP because the subproblems will repeat...

In order to memoize and keep track of which subproblems we have already encountered.... we need a DP array that takes into account the money and the index.  

We could define an unordered_map with a user defined key.... i thnk this meabs I have to overload the hash function..

Or I could just use a string


I WILL HAVE TO COME BACK TO THIS I AM FRUSTRATED. 


*/


struct Key{
	int money;
	int index;

	Key(int money_, int index_):money(money_), index(index_){}

};

/*

Why the fuck is this not working!?


M

*/


int long makeChange(std::vector<int> coins, int money, int index, std::unordered_map<std::string,long> &memo){// std::unordered_map<Key, long> &map ) {
	if(money ==0){
		return 1;
	}
	if(index >= coins.size()){
		return 0;
	}

	// Define the string for map..

	std::string key  = std::to_string(money) +"-" + std::to_string(index);
	
	std::cout << "Before the while loop the key is " << key <<"  and memo[key] " << memo[key] << std::endl;

	
	std::unordered_map<std::string,long>::const_iterator it = memo.find(key);
	//std::cout << "I get here";
	if(it !=memo.end()){
		std::cout << it->first << " is " << it->second << std::endl;
	}
	
	//std::cout<<"The value in the memo table for key: " << key << " is " << memo[key]<< std::endl;


	if(memo[key] > 0){
		return memo[key];
	}

	long a =memo[key]; 
	//std::cout << "memo[key]  " << a << std::endl;
	int amountWithCoin = 0;
	long ways = 0;
	while(amountWithCoin <= money){
		int remaining = money - amountWithCoin;
		ways += makeChange(coins, remaining, index +1, memo);				
		std::cout << "ways is " << ways << std::endl;		
		amountWithCoin += coins[index];
	}
	//std::cout<<"This key gets memoed: " << key << std::endl;
	memo[key] = ways;


	std::cout << "After the while loop ..t he key is " << key <<"  and memo[key] " << memo[key] << " and ways is " << ways << std::endl;
	//std::cout << "WTF  is ways doing " << ways << std::endl; 
	return ways;
}

long makeChange(std::vector<int> coins, int money){
	std::unordered_map<std::string, long> memo;




	return  makeChange(coins, money, 0, memo);

}


int main(){
	
	std::vector<int> denominations = {50,25,10,5,1};

	std::unordered_map<std::string, long> map;


	/*
		We could also make use of the unorderd_map find function.  Find returns an iterator to the element....


	*/

	std::unordered_map<std::string,double> mymap = {
     {"mom",5.4},
     {"dad",6.1},
     {"bro",5.9} };


	std::string str = "bro";


	std::unordered_map<std::string,double>::const_iterator got = mymap.find(str);

	if(got ==mymap.end()){
		std::cout << "Not found " << std::endl;
	}
	else 
		std::cout << got->first << " is " << got->second << std::endl;



	long ways = makeChange(denominations, 79);
	std::cout << "The number of ways to make 1 cent is... " <<  ways << std::endl;
	

}
