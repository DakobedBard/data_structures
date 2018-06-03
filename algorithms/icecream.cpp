/*

HackRank, its the hot chick who wrote that book...

Ice cream shop.. Find the indices of two items on the menu that allow us to spend all our money. 

*/

#include <vector>
#include <iostream>
#include <algorithm>




std::vector<int> findChoices(std::vector<int> menu, int money){

	std::sort(menu.begin(), menu.end());
	
	for(int i =0; i < menu.size(); i++){
		int complement = money-menu[i];
	}
}



int main(){


}



