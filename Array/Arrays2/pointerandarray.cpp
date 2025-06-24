#include<iostream>
using namespace std;
int main(){
    int arr[]={4,3,2,1,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int* ptr=arr;//array ke first element ka address dega
    // cout<<ptr<<endl;
    
    for(int i=0;i<=n;i++){
        cout<<&ptr[i]<<" ";
    }
    // cout<<endl;
    // *ptr=8;// ptr[0]=8;
    // ptr++;
    // *ptr =9;
    // ptr--;
    // for(int i=0;i<=5;i++){
    //     cout<<*ptr<<" ";
    //     ptr++;
    // }
    // ptr=arr;
}