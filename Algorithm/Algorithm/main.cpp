#include <iostream>
#include <vector>
#include <algorithm>
#include "dijkstra.h"

int main() {
    int V = 5; 
    std::vector<std::vector<int>> graph = 
    {
        {0, 10, 0, 0, 5},
        {10, 0, 3, 2, 0},
        {0, 3, 0, 9, 0},
        {0, 2, 9, 0, 7},
        {5, 0, 0, 7, 0}
    };

    int src = 0;

    dijkstra(graph, src);

    return 0;
}