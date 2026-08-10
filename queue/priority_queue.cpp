#include<iostream>
#include<queue>
using namespace std;

int main() {
    priority_queue<int>pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(3);
    for(int i=0;i<pq.size();i++){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}