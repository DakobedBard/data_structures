

/*

We are given two sorted arrays A and B of size n each.  Write an algorithm to find the median of the array obtained after merging the above 2 arrays(i.e array of length 2n).  THe complexity shoudl be O(log(n))

Method 1 ( simply count while merging)
use merge procedure of mergesort.  If count becomes n(for 2n elements) 


Method 2 (By comparing the medians of two arrays)

THis method works by first getting medians of the two sorted arrays and then comparing them

Let ar1 and ar2 be the input arrays

 ar1[] = {1, 12, 15, 26, 38}
 ar2[] = {2, 13, 17, 30, 45}

the median of ar1 is 15 
the median of ar2 is 17
the median of ar1 is less than that of ar2, so we know that the median is present in one of the following two subarrays

[15,26,38] and [2,13,17]

m1 = 26 m2 = 13
that is the subarray of ar1 greater than than the median
and the subarray of ar2 of elements less than the median

now m2 has the smaller median
[13,17] [15,26]

Now the size is 2.  
so the median is euqal:  max(15,13) + min(26,17)/2
			= max(ar1[0], ar2[0]) + min (ar1[1],ar2[1]))/2


The time complexity of this method is O(logn)


*/

#include <vector>

int samesizemedian(std::vector<int> ar1, std::vector<int> ar2){

}


int main(){

}
