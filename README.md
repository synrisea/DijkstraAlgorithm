## Understanding Dijkstra's Algorithm

Dijkstra's algorithm is designed to find the shortest path from a single source vertex to all other vertices in a graph with non-negative edge weights. It uses a greedy approach to iteratively select the vertex with the minimum distance from the source, then updates the distances of its neighboring vertices accordingly.

Here's a breakdown of how the algorithm works:

## Description of the Adjacency Matrix

An adjacency matrix is a two-dimensional array or matrix used to represent a graph. The rows and columns represent vertices, and the value in each cell `[i][j]` indicates the weight of the edge from vertex `i` to vertex `j`. A zero value usually means there's no direct edge between those vertices, while a positive value indicates an edge with that weight.

Here's the adjacency matrix used in this project:

```cpp
std::vector<std::vector<int>> graph =
{
    {0, 10, 0, 0, 5},
    {10, 0, 3, 2, 0},
    {0, 3, 0, 9, 0},
    {0, 2, 9, 0, 7},
    {5, 0, 0, 7, 0}
};
```

Therefore, the represented graph looks like this:

<p align="center">
  <img width="338" height="274" src="https://github.com/synrisea/DijkstraAlgorithm/blob/main/QvEBLedFvGUjfzDe-removebg-preview.png">
</p>


### Initialization:

- Set the initial distance from the source vertex to all other vertices to INT_MAX (effectively "infinity").
- The distance from the source vertex to itself is set to 0.
- Create a visited array to track which vertices have been processed.

### Finding the Vertex with Minimum Distance:

- The algorithm iterates through all vertices to find the one with the minimum distance from the source that hasn't been visited.
- This is the vertex that will be processed next.

### Updating Distances:

- Mark the selected vertex as visited.
- For each adjacent vertex, check if the edge between them exists (i.e., the weight in the adjacency matrix is non-zero).
- If the edge exists, update the distance for the adjacent vertex if the new path through the selected vertex is shorter than the current recorded distance.

### Iterate:

- Continue selecting the next unvisited vertex with the minimum distance and updating the distances of its neighbors until all vertices have been visited.

### Result:

- After all vertices have been processed, the dist array contains the shortest distances from the source vertex to all other vertices.

Dijkstra's algorithm efficiently finds the shortest paths in graphs with non-negative edge weights. It is widely used in network routing, transportation, and other domains where shortest path analysis is needed.

## Output

The code outputs the shortest distances from the source vertex to all other vertices in the graph. This provides a clear view of the minimum distance to reach each vertex from the source, based on the given adjacency matrix.
