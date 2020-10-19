
#include "Graph.h"

template <typename T >
void Graph<T>::AddVertex(int vId, T value){
	Vertex temp_v(vId , value) ;
	vertices.push_back(std::move(temp_v)) ;
}


template <typename T >
void Graph<T>::AddEdge(int start_id, int end_id, double cost = 0){
	//get vertex with start_id
	//add the edge to it
	char i ;
	for (i = 0 ; i < vertices.size() ; i ++ ) {
		if(vertices[i].id == start_id ) {
			vertices[i].AddEdge(end_id , cost) ;
			break ;
		}
	}
}

template <typename T >
const T & Graph<T>::GetVertexData(int vertex_id) const{
	char i ;
	for (i = 0 ; i < vertices.size() ; i ++ ) {
		if(vertices[i].id == vertex_id ) {
			return vertices[i].GetData() ;
		}
	}

}

template <typename T >
std::vector<int> Graph<T>::GetAllVertexIDs() const{
	std::vector<int> ids ;
	for (i = 0 ; i < vertices.size() ; i ++ ) {
		ids.push_back(vertices[i].id ) ;
	}
	return ids ;
}

template <typename T >
void Graph<T>::Vertex::AddEdge(int end_id, double cost){
	Edge temp_edge (end_id , cost) ;
	edges.push_back(std::move(temp_edge)) ;
}

template <typename T >
const T & Graph<T>::Vertex::GetData() const{
	return data ;
}


template <typename T >
const std::vector<Edge> & Graph<T>::Vertex::GetEdges() const{
	return edges ;
}


template <typename T >
const int Graph<T>::Edge::GetDestID() const{
	return dest_id ;
}

template <typename T >
const double Graph<T>::Edge::GetCost() const {
	return cost ;
}

