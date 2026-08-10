#include<iostream>
#include<queue>
using namespace std;

int main() {

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(3);

    cout << pq.top();
    return 0;
}