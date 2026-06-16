/*
Program: Breadth-First Search
Concepts: graph traversal, queues, adjacency list
Time Complexity: O(V + E)
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(const vector<vector<int>> &graph, int start) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "BFS order: ";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : graph[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
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

    bfs(graph, 0);
    return 0;
}
