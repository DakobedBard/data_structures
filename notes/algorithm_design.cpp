/*


Three fundamental abstract data types (containers, dictionaries, and prority queues)  

Data structures can be classified as either contiguous or linked, depending upon whether they are based on arrays or pointers

- contiguously allocated structures are composed of single slas of memory and include arrays, matrices, heaps and hash tables

- linked data structures are composed of distinct chunks of memory bound together by pointters, lists, trees, and graph adjacency lists.  

Arrays are the fundamental contiguously allocated data structure.  Arrays are structures of fixed size data records such that each element can be efficiently located by its index (or equivalently its address).

Advantages of contiguously allocated arrays are

- constant time acess given the index.  Becuse the index of each element maps directly to a particular memory address, we can access arbitrary data items instantly provided we know the index.

- space efficiency - Arrays consist purely of data, so no space is wasted with links or other formatting information.  Further, end of record information is not needed because arrays are built from fixed size records.  

- A common programming idiom involves iterating through all the elements of a data structure.  Arrays are good for ths because they exhibit excellent memory locality.  Physical contininuity between sucesseive data accesses helps exploit the high speed cache memory on modern architectures.  

- Downside of arrays is that their size is not dynamic.  

Dynamic arrays:

The primary thing lost using dynamic arrays is the guarantee that each array access takes constant time in the worst case.  All queries will be fast, except for those relatively few queries triggering arra doubling.  What we get instead is a promise that the nth array access will be completed quickly enough that the total effor expended so far will stil be O(n).  Amortization guarantees such as this arise frequentl in the analysis of data structures.  

Lists: 

The three basic operations supported by lists are searching, insertion and deletion.  Doubly linked lists each node poitns both to its predecessor and its successor element.  This simplifies certain operations at a cost of an extra poniter field per node.  

Searching a List

Searching for item x in a linked list can be done iteratively or recursively.  

How should i do it in my implementation??

The advantages of linked lists over static arrays include 
- overflow on linked structures can never occur unless the memory is full
- Insertions and deletions are simpler than for contiguous (array) lists
- With large records, moving pointers is easier and faster than moving the items themselves

-WIth the relative advantages of arrays include
- linked structures require extra space for storing pointers
- linked lists do not allow efficient random access to items
- arrays allow better memory locaclity and cache perforamnce than random pointer jumping.  

One final though about these fundamenetal structures is taht they can be though of as recursive objects

- lists - chopping the first element off a linked list leaves a smaller linked list
- arrays splitting the first k elements off of an n element array gives two smaller arrays of size k and -k respectively.  Arrays are recursive objects. 


Container: denotes a data structure that permits storage and retrieval of items independent of content.  By contrast dictionaries are abstract data types that retrieve based on key values or content.  

Containers are distinguised by the particular retrieval order they support.  In the two most important types of containers, this retrieval order depends on the insertion order.  




*/
