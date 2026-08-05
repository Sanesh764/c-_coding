
#include<iostream>
#include<vector>
using namespace std;

bool isitsafe(vector<vector<int>>& grid, int i, int j, int n) {
    return i >= 0 && j >= 0 && i < n && j < n && grid[i][j] == -1;
}

vector<int> dx{-2, -1, -2, -1, +2, +1, +2, +1};
vector<int> dy{+1, +2, -1, -2, +1, +2, -1, -2};

void display(vector<vector<int>>& grid, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j] << "\t";
        }
        cout << endl;
    }
}

void f(vector<vector<int>>& grid, int i, int j, int n, int count) {
    if (count == n * n) {
        display(grid, n);
        cout << "********\n";
        return;
    }
//from i,j we can go to 8 posiiton
//for evevry position we can only go if it is safe
    for (int k = 0; k < 8; k++) {
        int ni = i + dx[k];
        int nj = j + dy[k];

        if (isitsafe(grid, ni, nj, n)) {
            grid[ni][nj] = count;
            f(grid, ni, nj, n, count + 1);
            grid[ni][nj] = -1;
        }
    }
}
void knighttour(int n, int i, int j) {
    vector<vector<int>> grid(n, vector<int>(n, -1));//-1 denotes positions is vacent

    grid[i][j] = 0;   // mark starting cell
    f(grid, i, j, n, 1);
}

int main() {
    knighttour(5, 0, 0);
    return 0;
}
