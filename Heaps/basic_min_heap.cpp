#include<iostream>
#include<queue>
using namespace std;

int main() {
    priority_queue<int,vector<int>,greater<int>> pq; //min heap
    pq.push(110);
    pq.push(-20);
    pq.push(15);
    pq.push(40);
    pq.push(50);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();
    return 0;
}