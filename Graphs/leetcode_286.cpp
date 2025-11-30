#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        if (n == 0) return;
        int m = board[0].size();

        queue<pair<int, int>> q;

        auto bfs = [&](int i, int j) {
            if (board[i][j] != 'O') return;
            q.push({i, j});
            board[i][j] = '-';
                while (!q.empty()) {
                    pair<int,int> p = q.front(); q.pop();
                    int x = p.first, y = p.second;

                    vector<pair<int, int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
                    for (auto d : dirs) {
                        int dx = d.first, dy = d.second;
                        int nx = x + dx, ny = y + dy;
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && board[nx][ny] == 'O') {
                            board[nx][ny] = '-';
                            q.push({nx, ny});
                        }
                    }
                }

        };
        // 1. BFS all 'O's on borders
        for (int i = 0; i < n; ++i) {
            if (board[i][0] == 'O') bfs(i, 0);
            if (board[i][m-1] == 'O') bfs(i, m-1);
        }
        for (int j = 0; j < m; ++j) {
            if (board[0][j] == 'O') bfs(0, j);
            if (board[n-1][j] == 'O') bfs(n-1, j);
        }

        // 2. Post-process board: flip surrounded regions and revert marker
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                if (board[i][j] == 'O') board[i][j] = 'X';
                else if (board[i][j] == '-') board[i][j] = 'O';
            }
    }
};

// Helper to print the board
void printBoard(const vector<vector<char>>& board) {
    for (const auto& row : board) {
        for (char c : row) cout << c << ' ';
        cout << endl;
    }
}

int main() {
    vector<vector<char>> board = {
        {'X','X','X','X'},
        {'X','O','O','X'},
        {'X','X','O','X'},
        {'X','O','X','X'}
    };

    Solution sol;
    cout << "Original board:\n";
    printBoard(board);

    sol.solve(board);

    cout << "\nProcessed board:\n";
    printBoard(board);

    return 0;
}
