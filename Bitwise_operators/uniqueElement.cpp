#include<iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,1,2,3,4,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
    }
    cout<<result;
    return 0;
}