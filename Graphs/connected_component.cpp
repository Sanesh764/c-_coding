#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std;

vector<list<int>> graph;
int v; // number of vertices

void add_edge(vector<list<int>>& graph, int src, int dest, bool bi_dir = true) {
    graph[src].push_back(dest);    
    if (bi_dir) {
        graph[dest].push_back(src);
    }
}

void dfs(int node, unordered_set<int>& visited) {
    visited.insert(node);
    for (auto neighbor : graph[node]) {
        if (!visited.count(neighbor)) {
            dfs(neighbor, visited);
        }
    }
}

int connected_component() {
    int result = 0;
    unordered_set<int> visited;
    for (int i = 0; i < v; i++) {
        if (visited.count(i) == 0) {
            result++;
            dfs(i, visited);
        }
    }
    return result;
}

int main() {
    cout << "Enter number of vertices: ";
    cin >> v;

    graph.resize(v);
    
    int e;
    cout << "Enter number of edges: ";
    cin >> e;

    for (int i = 0; i < e; i++) {
        int s, d;
        cout << "Enter source and destination: ";
        cin >> s >> d;
        add_edge(graph, s, d);
    }

    cout << "Connected Components: " << connected_component() << "\n";
    return 0;
}
