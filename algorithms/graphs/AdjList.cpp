/*

Write an adjacency list reprsentation..

I had forgotton about shadowing template paramater for inner classes.  

Wow this is MUCH cleaner than the code I wrote the other day which was honestly complete trash.  

Now how do we add edges to this.... ?

Well we are using a hashed string to map... so we could 



`map to adjlist using the vertices to_string...  


*/

#include <unordered_map>
#include <vector>
#include <string>


template <class T>
class AdjList{

  private:




	template <class T_>
	class Vertex{
		std::string label;
		T_ data;
 	  public:
		std::string toString(){
			return std::to_string(data);
		}
		
	};
	/*
As of right now our Edge 
	*/
	template <class T_>
	class Edge{
		Vertex<T_> dest;
		int weight;
		Edge(Vertex<T_> dest_, int weight_):dest(dest_), weight(weight_){}
	};


	std::unordered_map<std::string,std::vector<Edge<T>>> vertices;

  public:
	AdjList():vertices(){}
	int insertEdge(Vertex<T> src, Vertex<T> dest, int weight);
	int insert(std::string src, std::string dest, int weight);

};

class GraphNode{

};


/*
Insert an edge into the graph.... so look up vertex1 is in the adjlist, if not put it in...

*/
template <class T>
int AdjList<T>::insertEdge(AdjList<T>::Vertex<T>, AdjList<T>::Vertex<T>, int weight){


	
}
/*
We have strings to labels for two vertices... Check 



*/

template <class T>
int AdjList<T>::insert(std::string src, std::string dest, int weight){

}






/*


*/

template <class T>
class AdjMatrix{

  private:


  public:

	std::vector<std::vector<T>> matrix;


};






int main(){


	AdjList<int> graph;


}
