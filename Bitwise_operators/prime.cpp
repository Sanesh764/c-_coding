#include<iostream>
using namespace std;

int main() {
    int n=10;

    int count=0;
    if(n>=2) count++;
    for(int i = 3; i < n; i++) {
    bool flag = true;

    for(int j = 2; j < i; j++) {
        if(i % j == 0) {
            flag = false;
            break;
        }
    }
    if(flag)
        count++;
}
    cout<<count;
    return 0;
}