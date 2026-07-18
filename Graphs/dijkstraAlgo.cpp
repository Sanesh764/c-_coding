#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

vector<vector<pair<int, int>>> graph;
int v;

// src -> dest (weight)
void add_edge(int src, int dest, int wt, bool bi_dir = true) {
    graph[src].push_back({dest, wt});
    if (bi_dir) {
        graph[dest].push_back({src, wt});
    }
}
vector<int> dijkstraAlgo(int src) {
    vector<int> dist(v, INT_MAX);
    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // Ignore outdated entries
        if (d > dist[u])
            continue;

        for (auto e : graph[u]) {
            int vertex = e.first;
            int wt = e.second;

            if (dist[vertex] > dist[u] + wt) {
                dist[vertex] = dist[u] + wt;
                pq.push({dist[vertex], vertex});
            }
        }
    }

    return dist;
}

int main() {
    cout << "Enter number of vertices: ";
    cin >> v;
    graph.resize(v);
    int e;
    cout << "Enter number of edges: ";
    cin >> e;
    cout << "Enter (source destination weight):\n";
    while (e--) {
        int s, d, w;
        cin >> s >> d >> w;
        add_edge(s, d, w);
    }
    int src;
    cout << "Enter source vertex: ";
    cin >> src;
    vector<int> dist = dijkstraAlgo(src);
    cout << "\nShortest Distance from Source:\n";
    for (int i = 0; i < v; i++) {
        cout << i << " -> ";
        if (dist[i] == INT_MAX)
            cout << "INF";
        else
            cout << dist[i];
        cout << endl;
    }
    return 0;
}

/*
Enter number of vertices:
5
Enter number of edges:
6
Enter (source destination weight):
0 1 2
0 2 4
1 2 1
1 3 7
2 4 3
3 4 1
Enter source vertex:
0
*/