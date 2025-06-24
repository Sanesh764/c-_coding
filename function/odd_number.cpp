#include <iostream>
using namespace std;
void printOddNumbers(int a, int b) {
    for (int num = a; num <= b; ++num) {
        if (num % 2 != 0) {
            cout << num << " ";
        }
    }
}
int main() {
    int lowerBound, upperBound;
    cout << "Enter the lower bound (a): ";
    cin >> lowerBound;
    cout << "Enter the upper bound (b): ";
    cin >> upperBound;
    cout << "Odd numbers between " << lowerBound << " and " << upperBound << " are:\n";
    printOddNumbers(lowerBound, upperBound);
    return 0;
}

