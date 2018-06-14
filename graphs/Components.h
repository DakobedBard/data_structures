
#ifndef _DTLCOMPONENTS_H_
#define _DTLCOMPONENTS_H_

/*

In this file we define functions that return the components of a given Graph.  

Testing whether a graph is conneted is an essential preprocessing step for every graph algorithm.  

There are two distinct notions of connected coponents for directed graphs.  A directed graph is weakly connected if it ould be connected by ignoring the direction of edges.  Thus a weakly connected graph constist of a single peice.  

A directed graph is strongly conneted if there is a directed path betweeen every pair of vertices.  This distinction is best made clear by considering the network of one and two way streets in a city.  
The network is strongly connected if it is possible to drive legally
between every two positions. The network is weakly connected when it is
possible to drive legally or illegally between every two positions. The network
is disconnected if there is no possible way to drive from a to b.

All of the strongly connected components of G can be extracted in linear time using more sophisticated DFS based algorithms.  A generalization of the above two DFS idea is decepitly easy to program but somewhat subtle to understant exactly why it works.  

Perform a DFS, starting from an arbitrary vertex in G, and labeling
each vertex in order of its completion (not discovery).
2. Reverse the direction of each edge in G, yielding G  .
3. Perform a DFS of G  , starting from the highest numbered vertex in G.
If this search does not completely traverse G  , continue with the highest
numbered unvisited vertex.
4. Each DFS tree created in Step 3 is a strongly connected component.



*/



#endif
