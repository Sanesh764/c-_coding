/*
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
#include <iostream>
#include <algorithm> // Include this for std::min
using namespace std;
int main() {
    int n = 4; // Change this value to adjust the number of rows
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
             int distance = min(min(i, j), min(n - i - 1, n - j - 1));
            int value = n - distance;
            cout << value << " ";
        }
        cout << "\n";
    }
    return 0;
}

