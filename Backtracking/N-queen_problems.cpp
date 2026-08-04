#include <iostream>
#include <vector>
#include <string>
using namespace std;
    vector<vector<char>> grid;
    vector<vector<string>> result;
    bool canplacequeen(int row, int col, int n) {
        // check column
        for (int i=row - 1; i >= 0; i--) {
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
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout<<grid[i][j];
                }
                cout<<"\n";

            }
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

int main() {
    // Print solutions
    int n=4;
    grid.clear();
    result.clear();
    grid.resize(n, vector<char>(n, '.'));
    f(0,n);
    return 0;
}
