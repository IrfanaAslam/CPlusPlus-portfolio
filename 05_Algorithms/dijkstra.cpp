/*
Program: Dijkstra's Shortest Path
Concepts: weighted graphs, priority queue, greedy algorithm
Time Complexity: O((V + E) log V)
Author: Irfana Aslam
*/
#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

void dijkstra(const vector<vector<pair<int, int>>> &graph, int start) {
    int n = (int)graph.size();
    vector<int> dist(n, INT_MAX);
    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [d, node] = pq.top();
        pq.pop();
        if (d > dist[node]) continue;

        for (auto [neighbor, weight] : graph[node]) {
            if (dist[node] + weight < dist[neighbor]) {
                dist[neighbor] = dist[node] + weight;
                pq.push({dist[neighbor], neighbor});
            }
        }
    }

    cout << "Shortest distances from node " << start << ":\n";
    for (int i = 0; i < n; i++)
        cout << "  to " << i << ": " << dist[i] << endl;
}

int main() {
    int n = 5;
    vector<vector<pair<int, int>>> graph(n);
    auto addEdge = [&](int a, int b, int w) {
        graph[a].push_back({b, w});
        graph[b].push_back({a, w});
    };

    addEdge(0, 1, 4);
    addEdge(0, 2, 1);
    addEdge(2, 1, 2);
    addEdge(1, 3, 1);
    addEdge(2, 3, 5);
    addEdge(3, 4, 3);

    dijkstra(graph, 0);
    return 0;
}
