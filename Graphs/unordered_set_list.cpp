#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void add_edge(vector<unordered_set<int>>& graph, int src, int dest, bool bi_dir = true) {
    graph[src].insert(dest);
    if (bi_dir) {
        graph[dest].insert(src);
    }
}
void display(vector<unordered_set<int>>& graph) {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << " -> ";
        for (auto el : graph[i]) {
            cout << el << " ";
        }
        cout << endl;
    }
}

int main() {
    int v;
    cin >> v;
    vector<unordered_set<int>> graph(v);
    int e;
    cin >> e;
    while (e--) {
        int s, d;
        cin >> s >> d;
        add_edge(graph, s, d);
    }
    display(graph);
}