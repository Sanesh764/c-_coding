#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <cstdlib>

using namespace std;

class Solution {
public:
    int minKnightMoves(int x, int y) {
        x = abs(x); y = abs(y);
        vector<vector<int>> directions{{2, 1}, {1, 2}, {-1, 2}, {-2, 1},
                                       {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
        queue<pair<int, int>> qu;
        set<pair<int, int>> visited;
        qu.push({0, 0});
        visited.insert({0, 0});
        int steps = 0;

        while (!qu.empty()) {
            int sz = qu.size();
            for (int i = 0; i < sz; ++i) {
    auto cur = qu.front();
    qu.pop();
    int curx = cur.first;
    int cury = cur.second;

    if (curx == x && cury == y) return steps;
        for (auto& d : directions) {
            int nx = curx + d[0], ny = cury + d[1];
            if (nx >= -2 && ny >= -2 && !visited.count({nx, ny})) {
                visited.insert({nx, ny});
                qu.push({nx, ny});
            }
        }
    }
        steps++;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    int x, y;
    cout << "Enter target x and y: ";
    cin >> x >> y;
    cout << "Minimum knight moves: " << sol.minKnightMoves(x, y) << endl;
    return 0;
}
