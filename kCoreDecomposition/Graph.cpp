#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <list>

class Edge;

class Vertex {
public:
    int value;
    int in;
    int out;
    std::list<Vertex*> next;
    std::list<Edge*> edges;

    Vertex(int v, int i = 0, int o = 0) :value(v) {}
};

class Edge {
public:
    int weight;
    Vertex* from;
    Vertex* to;
    Edge(int w, Vertex* f, Vertex* t) :weight(w), from(f), to(t) {}
};

class Graph {
public:
    std::unordered_map <int, Vertex*> vertices;
    std::unordered_set <Edge*> edges;
};

Graph* createGraphStructure(int arr[][3], int n){
    // arr[][3]:
    //  1. [0] is weight
    //  2. [1] is from vertex
    //  3. [2] is to   vertex
    // n is # of vertices
    Graph *graphStruct = new Graph;
    for (int i = 0; i < n; i++){
        int weight = arr[i][0];
        int from = arr[i][1];
        int to = arr[i][0];
        if (!graphStruct->vertices.count(from)){
            graphStruct->vertices[from] = new Vertex(from);
        }
        if (!graphStruct->vertices.count(to)){
            graphStruct->vertices[to] = new Vertex(to);
        }

        Vertex* fromVertex = graphStruct->vertices[from];
        Vertex* toVertex = graphStruct->vertices[to];

        Edge* newEdge = new Edge(weight, fromVertex, toVertex);
        fromVertex->out++;
        fromVertex->edges.push_back(newEdge);
        fromVertex->next.push_back(toVertex);
        toVertex->in++;
        graphStruct->edges.insert(newEdge);
        
    }
    return graphStruct;

}