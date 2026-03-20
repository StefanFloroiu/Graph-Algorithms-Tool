#include "Graph.h"
#include <iostream>
#include <queue>
#include <limits>
#include <algorithm>

const int INF = std::numeric_limits<int>::max();

Graph::Graph(int nodes) : numNodes(nodes) {
    adj.resize(nodes);
}

void Graph::addEdge(int u, int v, int weight, bool bidirectional) {
    adj[u].push_back({v, weight});
    if (bidirectional) {
        adj[v].push_back({u, weight});
    }
}

void Graph::bfsShortestPath(int start, int target) {
    std::vector<int> dist(numNodes, INF);
    std::vector<int> parent(numNodes, -1);
    std::queue<int> q;

    dist[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (auto& edge : adj[u]) {
            if (dist[edge.to] == INF) {
                dist[edge.to] = dist[u] + 1;
                parent[edge.to] = u;
                q.push(edge.to);
            }
        }
    }
    printPath(parent, target, "BFS");
}

void Graph::dijkstra(int start, int target) {
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    std::vector<int> dist(numNodes, INF);
    std::vector<int> parent(numNodes, -1);

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto& edge : adj[u]) {
            if (dist[u] + edge.weight < dist[edge.to]) {
                dist[edge.to] = dist[u] + edge.weight;
                parent[edge.to] = u;
                pq.push({dist[edge.to], edge.to});
            }
        }
    }
    printPath(parent, target, "Dijkstra");
}

void Graph::printPath(const std::vector<int>& parent, int target, std::string algoName) {
    if (parent[target] == -1) {
        std::cout << algoName << ": Nu exista drum spre " << target << "\n";
        return;
    }
    std::vector<int> path;
    for (int v = target; v != -1; v = parent[v]) path.push_back(v);
    std::reverse(path.begin(), path.end());

    std::cout << algoName << " Path: ";
    for (size_t i = 0; i < path.size(); ++i)
        std::cout << path[i] << (i == path.size() - 1 ? "" : " -> ");
    std::cout << "\n";
}