#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int i=0;
    int j=n-1;
    for(i=0;i<n/2;i++,j--){
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    return 0;
}