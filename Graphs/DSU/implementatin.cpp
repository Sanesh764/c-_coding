#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

class DSU {
private:
    vector<int> parent;
    vector<int> size;

public:
    DSU(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        iota(parent.begin(), parent.end(), 0);
    }
    int find(int node) {
        if (parent[node] == node) {
            return node;
        }
        return parent[node] = find(parent[node]);
    }
    bool unite(int u, int v) {
        int root_u = find(u);
        int root_v = find(v);
        if (root_u == root_v) {
            return false; 
        }
        if (size[root_u] < size[root_v]) {
            parent[root_u] = root_v;
            size[root_v] += size[root_u];
        } else {
            parent[root_v] = root_u;
            size[root_u] += size[root_v];
        }
        return true;
    }
    bool is_connected(int u, int v) {
        return find(u) == find(v);
    }
    int get_size(int node) {
        return size[find(node)];
    }
};

int main() {
    DSU dsu(5);

    dsu.unite(1, 2);
    dsu.unite(3, 4);

    cout << boolalpha;
    cout << "Are 1 and 2 connected? " << dsu.is_connected(1, 2) << "\n"; // True
    cout << "Are 1 and 3 connected? " << dsu.is_connected(1, 3) << "\n"; // False

    dsu.unite(2, 3);
    cout << "Are 1 and 4 connected now? " << dsu.is_connected(1, 4) << "\n"; // True
    cout << "Size of component containing 1: " << dsu.get_size(1) << "\n";  // 4

    return 0;
}
