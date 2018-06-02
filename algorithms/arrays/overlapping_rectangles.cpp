
/*

Given 2 overlapping rectangles on a plane, how would you find the area of the overlap. 

Define a point class and a Rectangle class which takes two points.. 


*/

#include <iostream>


class Point{
  public:
	int x;
	int y;
	Point(int x_, int y_):x(x_), y(y_){

	}
};

class Rectangle{
  public:
	Point bottom_left;
	Point top_right;
	Rectangle(int x1, int y1, int x2, int y2):bottom_left(x1,y1),top_right(x2, y2){}


	int area(){
		return (top_right.x-bottom_left.x)*(top_right.y-bottom_left.y);
	}


};

/*

	We will create a new rectangle that represents the region of overlap.  Can I do this with more interesting objects?? I would imagine so...

	How would I extend this to 3 or more objects ??? Find out...


*/
int overlap_area(Rectangle r1, Rectangle r2){


	int maxx1 = std::max(r1.bottom_left.x, r2.bottom_left.x);
	int minx2 = std::min(r1.top_right.x, r2.top_right.x);
	int maxy1 = std::max(r1.bottom_left.y, r2.bottom_left.y);
	int miny2 = std::min(r1.top_right.y, r2.top_right.y);
	
	Rectangle r(maxx1, maxy1, minx2, miny2);

	std::cout << "The max x1 " << maxx1 <<  " and the minimum x2 " << minx2 << "  maximum y1 " << maxy1 << " minimum y2 " << miny2 <<  std::endl;


	return r.area();
}




int main(){


	Rectangle r1(2,1,5,5);
	Rectangle r2(3,2,5,7);
	int overlap = overlap_area(r1, r2);
	int area = r2.area();
	std::cout << "The overlap between r1, and r2 is " << overlap << std::endl;



}
