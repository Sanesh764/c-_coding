
#include<iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=n-2;i>=0;i--){
        arr[i] = arr[i]*arr[i+1];
    }
    cout<<"suffix product array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}