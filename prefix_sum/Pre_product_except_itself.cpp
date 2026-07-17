#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>pre(n);
    //ye leetcode ka ek question hai product of array except self me kam deta hai
    pre[0]=1;
    int p=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=p;
        p*=arr[i];
    }
    cout<<"suffix array :";
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
    return 0;
}