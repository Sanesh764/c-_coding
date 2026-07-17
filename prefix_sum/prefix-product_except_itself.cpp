#include<iostream>
#include<vector>
using namespace std;

int main() {
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>suff(n);
    int p=arr[n-1];
    suff[n-1]=1;
    for(int i=n-2;i>=0;i--){
        suff[i]=p;
        p*=arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<suff[i]<<" ";
    }

    return 0;
}