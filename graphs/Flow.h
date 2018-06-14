#ifndef _FLOW_H_
#define _FLOW_H_

/*

This header file will define algorithms used in problems in which a Graph represents a flow network where every edge has a capacity.



In optimization theory, maximum flow problems involve finding a feasible flow through a single source, single sink flow network that is maximum.  Maximum flow problem can be seen as a special case of more complex network flow problems, such as ciculation problems.  The maximum value of an s-t flow (flow from source s to sink t) is equal to the minimum capacity of an s-t cut(i.e cut severing s from t) in the network as state in the max flow min cut theorm. 

Given a flow network G, find the flow with maximum value on G.  

The connected components of a graph represent the pieces of the graph.  Two vertics are in the same component of G if and only if there exists some path between them.  

FInding connected components is at the heart of many graph applications.  Or example, consider the problem of identifying natural clusters in a set of items.  Testing whether a graph is connected is an essential preprocessing step for every graph algorithm.  We can test wether or not a graph is connected is connected using either BFS or DFS.  s


Algorithms for Netwokr Flows

Ford Fulkerson Algoritm
- Network flows on directed acyclic graphs
- Dag is a directed graph with no cycles
- Flow network G= (V,E) is a directed grap in which each edge (u,v) in E has a nonnegative capacity c(u,v) =0


- Distinguished vertices source s ad sink t
source proudcues output at stedy rate
sink: consumes the output at a stead state.  

Flow:  a real valued function f:VxV -> R that satisfies three properties

capacity constraint:  FOr all u,v in V, we require that that f(u,v) <= c(u,v)

skew symmetry:  For all u,v in V, we require f(u,v) = -f(v,u)
- The netflow from a vertes u to a vertex v is the negative of the net flow in the other direction.  

- FLow conservation:  For all u in V -{s,t} we require that the sume of f(u,v)=0 for vertices v in V.

The quantity f(u,v) can be positive or negative is called the net flow from vertex u to v.  
THe value of the flow is defined |f| = sum f(s,v) for v in V.  Net flow out of the source



Residual Capacity

given a flow f in network G = (V,E)

consider a pair of vertices u,v in V.

residual capacity:
-The amout of additional flow e can push directly from u to v.  

cf(u, v) = c(u,v) - f(u,v) >0  since f(u,v) <= c(u,v))


example

c(u,v) = 16, f(u,v) =5 -> cf(u,v) =11

Residual Network

Residual networ: Gf=(V,Ef)
Ef - {(u,v) in VxV: cf(u,v) > 0}
- Each edge of the residual network can admit a positive flow 
- Given flows f1 and f2 the flow sum f1+f2 is (f1+f2)(u,v) = f1(u,v) + f2(u,v)


- Ford Fulkerson method is iterative, 

-Starts with f(u,v) for (u,v) in V initial flow of value 0.  
-Mehod is based on the augmenting path

A path from s to t along which we can push more flow and then augment flow along this path.


FordFulkerson(G,s,t) ;

*/


#include "AdjList.h"

/*


*/

template <class T>
void FordFulkerson(AdjList<T>, T s, T t){


}


#endif
