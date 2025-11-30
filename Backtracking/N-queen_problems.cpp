#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<char>> grid;
    vector<vector<string>> result;

    bool canplacequeen(int row, int col, int n) {
        // check column
        for (int i = row - 1; i >= 0; i--) {
            if (grid[i][col] == 'Q') {
                return false;
            }
        }

        // check left diagonal
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (grid[i][j] == 'Q') {
                return false;
            }
        }

        // check right diagonal
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (grid[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }

    void f(int row, int n) {
        if (row == n) {
            vector<string> temp;
            for (int i = 0; i < n; i++) {
                string res = "";
                for (int j = 0; j < n; j++) {
                    res += grid[i][j];
                }
                temp.push_back(res);
            }
            result.push_back(temp);
            return;
        }

        for (int col = 0; col < n; col++) {
            if (canplacequeen(row, col, n)) {
                grid[row][col] = 'Q';
                f(row + 1, n);
                grid[row][col] = '.'; // backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        grid.clear();
        result.clear();
        grid.resize(n, vector<char>(n, '.'));
        f(0, n);
        return result;
    }
};

int main() {
    Solution s;
    vector<vector<string>> ans = s.solveNQueens(4);

    // Print solutions
    for (auto &board : ans) {
        for (auto &row : board) {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
