



/*

In this file we will implement some graph coloing algorithms.

Two Coloring Graphs

vertex coloring problems seeks to assign a label (or color) to each vertex of a graph sch that no edge links any two vertices of the same color.  We can easily avoid all conflicts by assigning each vertex a unique color.  

A graph is bipartite if it can e colored without conflicts while using only two colors.  Arise naturally in many applications.  We can augment BFS so that whenever we discover a new vertex, we color it the opposite color of its parent.  We check wheter any non discovery ege links two vertices of the same color.  SUch conflict means that the graph cannot be two colored.  

*/
