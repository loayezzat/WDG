
#ifndef GRAPH_H_
#define GRAPH_H_
#include <vector>
#include <iostream>

template <typename T>
class Graph
{
    public:
	Graph(){

	}
        void AddVertex(int vId, T value);
        void AddEdge(int start_id, int end_id, double cost = 0);
        const T & GetVertexData(int vertex_id) const;
        std::vector<int> GetAllVertexIDs() const;
        //std::vector<int> DijkstraSPF(int start_id) const;
        unsigned int graph_id ;
    private:
        class Vertex;
        std::vector<Vertex> vertices;

       // void Print(std::ostream & out) const;
        void Print() const ;
        class Edge
        {
            public:
        	Edge(int end_id, double cost): dest_id(end_id), cost(cost) {}
                const int GetDestID() const;
                const double GetCost() const;

            private:
                int dest_id;
                double cost;
        };

        class Vertex
        {
            public:
                Vertex(int id, T value): id(id), data(value) {}
                void AddEdge(int end_id, double cost);
                const T & GetData() const;
                const std::vector<Edge> & GetEdges() const;
                int id;
            private:
                T data;
                std::vector<Edge> edges;
        };

};

#endif /* GRAPH_H_ */
