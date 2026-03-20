#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <list>
#include <string>

// Structure for a weighted edge
struct Edge {
    int to;
    int weight;
};

class Graph {
private:
    int numNodes;
    // Adjacency list as described in the CV
    std::vector<std::list<Edge>> adj;

    // Private method for path reconstruction
    void printPath(const std::vector<int>& parent, int target, std::string algoName);

public:
    // Constructor
    Graph(int nodes);

    // Add an edge to the graph
    void addEdge(int u, int v, int weight = 1, bool bidirectional = true);

    // BFS algorithm for unweighted shortest path
    void bfsShortestPath(int startNode, int targetNode);

    // Dijkstra's algorithm for weighted shortest path
    void dijkstra(int startNode, int targetNode);
};

#endif