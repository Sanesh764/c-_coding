#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"original array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    cout<<endl;
    cout<<"modified array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
