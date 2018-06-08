/*

Find the largest rectangle in a histogram..


We could do this using brute force but of course this is inefficient.

*/

#include <vector>
#include <stack>
#include <iostream>
class Point{
	int x;
	int y;
  public:
	Point(int x_, int y_):x(x_), y(y_){}
};

class Rectangle{

	
	Point bottomleft;
	Point topright;
  public:
	Rectangle(int x1, int y1, int x2, int y2):bottomleft(x1,y1), topright(x2,y2){}

};



int maxArea(std::vector<int> histogram){
	int max = 0;
	std::stack<int> stack;
	return 0;
}

int main(){

	std::vector<int> hist = {1,2,3,4,5,3,3,2};

	std::cout << "The maximum area rectangle in the histogram is " << maxArea(hist) << std::endl;


}
