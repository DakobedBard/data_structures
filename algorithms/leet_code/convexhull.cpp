/*

We are finding the convex hull...

How would we got about doing this??  MIT has a good lecture on this... 

The convex hull is the smallest polygon containing all points in S, CH(S)

sequence of clockwise points

MIT GUY says we should represent this 

Naive implementation:

For each pair of points .. we pick a hyperplane between each point.  If all other points are one side of this hyperplane, then we we add this segment to the convex hull.  We have n^2 different segments between points.  

For each segment, we test wether all points are one one side of this segment, this is another order of n. 

overall o(n^3)


Divide and Conquer:


Break up the points... halfplanes..


Convex hull Algorithm

sort the points by their x coordinates.

I am deeling with a free invalid size error



*/



#include <iostream>
#include <vector>
#include <algorithm>

struct Point{
	int x;
	int y;
	Point():x(0),y(0){}
	Point(int a, int b): x(a),y(b){}
	bool operator < ( const Point &b){			//Rememberthat the bool operator< takes only one paramter..
		return x < b.x;
	}
};

void printPoints(std::vector<Point> &points){

	for(int i=0; i < points.size(); i++){
		std::cout<<" x " <<  (points[i]).x << " y " << (points[i]).y << "  " ;

	}
	std::cout << std::endl;
}
/*

	sort the points by their x coordinate.  
	for input set S
		divide into left half and right half by x coords
		compute CH(A) & CH(B) 
		merge


the important question is how do we merge?


*/

/*

This is the important aspect of this merge algorithm

The obvious merge algorithm would be to consider all pairs of points a in lefthull and b in right hull. 
n^2.. 
What if we go the highest a point and hightest b.  

We want to maximize the intercept with the yij O(n^2)

two finger algorithm for merging two convex hulls

start with a1, the point with the highest x coordinate 


here is the pseudo code

i=1;
j =1
while(y(i, j+1) > y(i, j) | y(i+1, j) > y(i,j)
	if(y(i,j+1) > y(i,j)
		j = j+1 md 
	else
		i = i-1 mod P

return (ai, bj) as upper tangent






*/
std::vector<Point> merge(std::vector<Point> &lefthull, std::vector<Point> &righthull){
	int numleftpoints = lefthull.size();
	int numrightpoints = righthull.size();
	
}

std::vector<Point> convexHull(std::vector<Point> &points){

	std::cout << "Before the points are sorted.. " << std::endl;
	printPoints(points);
	std::sort(points.begin(), points.end());	

	std::cout << "After the points are sorted.. " << std::endl;
	printPoints(points);
	std::vector<Point> res;
	
	return res;
}


int main(){
	std::vector<Point> points;
	Point point1(1,1);
	Point point2(2,2);
	Point point7(0,4);
	Point point3(2,0);
	Point point4(2,4);	
	Point point5(3,3);
	Point point6(4,2);
	points.push_back(point1);
	points.push_back(point2);
	points.push_back(point3);
	points.push_back(point4);
	points.push_back(point5);
	points.push_back(point6);
	std::vector<Point> points2 = {point1,point2,point3,point4,point5,point6, point7};

	std::vector<Point> fence = convexHull(points2);


}
