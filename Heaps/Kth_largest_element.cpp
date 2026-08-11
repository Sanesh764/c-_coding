#include<iostream>
#include<queue>
using namespace std;

int main() {
    int arr[]={11,4,24,-12,87,-6,23,4,1,23,-90,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=n-1;
    priority_queue<int,vector<int>,greater<int> >pq;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top()<<endl;
    return 0;
}