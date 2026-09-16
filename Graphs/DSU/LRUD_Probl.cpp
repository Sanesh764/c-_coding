
//method 1
#include <bits/stdc++.h>
using namespace std;
bool canReach(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int r = 0, c = 0;
    while (true) {
        // Destination
        if (r == n - 1 && c == m - 1) return true;
        // Outside grid
        if (r < 0 || r >= n || c < 0 || c >= m) return false;
        // Cycle
        if (visited[r][c]) return false;
        visited[r][c] = true;
        // Move
        if (grid[r][c] == 'L') c--;
        else if (grid[r][c] == 'R') c++;
        else if (grid[r][c] == 'U') r--;
        else if (grid[r][c] == 'D') r++;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }
    if (canReach(grid)) cout << "true\n";
    else cout << "false\n";
    return 0;
}

/*
pair<int, int> nextCell(vector<vector<char>>& grid, int r, int c) {

    int n = grid.size();
    int m = grid[0].size();

    if (grid[r][c] == 'L')
        c--;
    else if (grid[r][c] == 'R')
        c++;
    else if (grid[r][c] == 'U')
        r--;
    else if (grid[r][c] == 'D')
        r++;

    // Outside grid
    if (r < 0 || r >= n || c < 0 || c >= m)
        return {-1, -1};

    return {r, c};
}

bool canReach(vector<vector<char>>& grid) {

    int n = grid.size();
    int m = grid[0].size();

    // Start is destination
    if (n == 1 && m == 1)
        return true;

    pair<int, int> slow = {0, 0};
    pair<int, int> fast = {0, 0};

    while (true) {

        // Slow moves 1 step
        slow = nextCell(grid, slow.first, slow.second);

        if (slow.first == -1)
            return false;

        // Destination
        if (slow.first == n - 1 && slow.second == m - 1)
            return true;


        // Fast moves 1 step
        fast = nextCell(grid, fast.first, fast.second);

        if (fast.first == -1)
            return false;


        // Fast moves another step
        fast = nextCell(grid, fast.first, fast.second);

        if (fast.first == -1)
            return false;

        // Destination
        if (fast.first == n - 1 && fast.second == m - 1)
            return true;


        // Cycle detected
        if (slow == fast)
            return false;
    }
}
*/