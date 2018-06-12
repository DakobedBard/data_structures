#ifndef _DTL_UNION_FIND_H_
#define _DTL_UNION_FIND_H_

/*

Disjoint set data data strucutre that keeps track of elements partitioned into a number of disjoint non-overlapping subsets.  A union-find algorithm is an algorithm that performs two useful operations on such a data structure

Find:  Determine which subset a particular element is in.  This can be used for determining if two elements are in the same subset.

Union Join two subsets into a single subset.


*/
#include <vector>
template<class T>
int find(std::vector<T> parent, int i){
	if(parent[i] == -1)
		return i;
	return find(parent, parent[i]);
}

template <class T>
void Union(std::vector<T> parent, T x , T y){
	int xset = find(parent, x);
	int yset = find(parent, y);
	parent[xset] = yset;
}


#endif
