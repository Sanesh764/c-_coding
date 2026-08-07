#include<iostream>
using namespace std;

int main() {
    int x=5;
    int y=11;

    cout<<__builtin_popcount(x^y)<<"\n";
    return 0;
}