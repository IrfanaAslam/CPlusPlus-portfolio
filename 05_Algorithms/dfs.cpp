/*
Program: Depth-First Search
Concepts: graph traversal, recursion, adjacency list
Time Complexity: O(V + E)
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
using namespace std;

void dfs(const vector<vector<int>> &graph, int node, vector<bool> &visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : graph[node])
        if (!visited[neighbor]) dfs(graph, neighbor, visited);
}

int main() {
    int n = 6;
    vector<vector<int>> graph(n);
    auto addEdge = [&](int a, int b) { graph[a].push_back(b); graph[b].push_back(a); };

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 3);
    addEdge(2, 4);
    addEdge(3, 5);

    vector<bool> visited(n, false);
    cout << "DFS order: ";
    dfs(graph, 0, visited);
    cout << endl;

    return 0;
}
