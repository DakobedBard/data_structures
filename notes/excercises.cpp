/*
Algorithm Design Manual

3.7.2:

Efficient String Mathing via Hashing

THe most fundamenetal operation on text strings is substring search, namely:

problem:  Substring Pattern Matching

Input: a text string t and a pattern string p
Output:  Does t contain the pattern p as a substring and if so where?

The simplest algorithm to search for the presence of pattern string p in text t overlays the patterng string at every osition in the thext text and checks whether every pattern character matches the corresponding text character.  As demonstrated in 2.5.3, this run in O(nm) 
where n = |t| and m = |p|.

The quadratic bound is worst case.  More complicated, worst case linear time search algorithms

Rabin Karp algorithm is based on hashing.  Suppose we compute a given hash function on both the pattern string p and the m character substring starting from the ith position of t.  If these two strings are identical, clearly the resulting hash values must be the same.  If the two strings are different, the hash values will almost certainly be different.  These false positives should be so reare that we an easily spend the O(m) time it takes to explicitly check the identiy of two strings whenever the hash values agree.  

This reduces to n-+2 hsh valuecomputations (the n-m+1 windows of t, plus on hash of p), plus what should be a very small number ofo(m) time verification steps.  The catch is that it takes O() time to compute a hash function on an mcharacter string and o(n) such computations seems to leae us with an O(mn) algorithm again.


Specialized Data Structures..

suffix/trees arrays are special data structures that preprocess strings to make pattern matching operations faster. 

- Geometric data structures.  Geometric data typically consists of collections of data points and regions.  REgions in the plane can be described by polygons where teh boundary of the polygon is given by a chain of line segments.  


3-1.  Determine if parantheses are balanced and properly nested.  Given algorithm that returns true if a string contains properly nested and balanced parantheses, and false if otherwise.  Identify the position of the first offending paranthesis if the is not properly nested and balanced.  

3-5 Find the overheaad fraction (the ratio of data space over total space) for each of the following binary tree implementation on n nodes.  

a) All nodes store data, two child pointers and a parent pointer.  The data field requires four bytes and each pointer requires four byes

b) only leaf nodes store data... internal nodes store two child pointers.  

3-6 Describe how to modify any balanced tree data structure such that search, insert, delete, minimum, maximum still take O(logn) time each but successor and predecessor now take o(1) time each.  Which operations have to be modified to support this?

Des



3-27 - Determine whether a linked list contains a loop as quickly as possibly w/out extra storage.  Also identify the location of the loop 


3-28:  You have an unodered array X of n integers.  Find the array M contaiing n elements where Mi is the product of all integers in X except for Xi.  You may not use division.  YOu an us extra memory...

3-29 Given an algorthm for finding an ordered word pair e.g "new york" occuring with the greatest frequency in a given webpage.  Which data strucures would you use.  




*/
