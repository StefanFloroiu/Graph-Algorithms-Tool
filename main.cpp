#include <iostream>
#include "Graph.h"

int main() {
    int nodes, edges;
    std::cout << "--- Graph Algorithms Tool (CLI) ---\n";
    std::cout << "Introduceti numarul de noduri: ";
    std::cin >> nodes;
    
    Graph g(nodes);

    std::cout << "Introduceti numarul de muchii: ";
    std::cin >> edges;

    std::cout << "Introduceti muchiile (u v pondere):\n";
    for(int i = 0; i < edges; ++i) {
        int u, v, w;
        std::cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    int start, target;
    std::cout << "\nNod start: "; std::cin >> start;
    std::cout << "Nod destinatie: "; std::cin >> target;

    std::cout << "\nRezultate:\n";
    g.bfsShortestPath(start, target);
    g.dijkstra(start, target);

    return 0;
}