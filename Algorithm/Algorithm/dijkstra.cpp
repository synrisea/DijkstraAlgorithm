#include "dijkstra.h"
#include <iostream>

int minDistance(const std::vector<int>& dist, const std::vector<bool>& visited, int V) 
{
    int min = INT_MAX;
    int minIndex = -1;

    for (int v = 0; v < V; ++v) 
    {
        if (!visited[v] && dist[v] < min) 
        {
            min = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}

void dijkstra(const std::vector<std::vector<int>>& graph, int src)
{
    int V = graph.size();
    std::vector<int> dist(V, INT_MAX);
    std::vector<bool> visited(V, false);


    dist[src] = 0;


    for (int count = 0; count < V - 1; ++count) 
    {
        int u = minDistance(dist, visited, V);

        visited[u] = true;

        for (int v = 0; v < V; ++v) 
        {
            if (!visited[v] &&
                graph[u][v] != 0 &&
                dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) 
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    std::cout << "Vertex \t Distance from Source" << std::endl;
    for (int i = 0; i < V; ++i) {
        std::cout << i << "\t\t" << dist[i] << std::endl;
    }
}