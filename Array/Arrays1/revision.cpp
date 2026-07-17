#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void print(int* arr ,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int arr[]={2,4,5,7,1,90,64,65,78,89,98,231,122};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    print(arr,n);
    for(int i=n;i>=0;i--){
        v.push_back(arr[i]);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    // int * ptr=arr;
    // for(int i=0;i<n;i++){
    //     cout<<*ptr <<" ";
    //     ptr++;
    // }
    // int max1=INT_MIN;
    // int max2=INT_MIN;

    // for(int i=0;i<n;i++){
    //     if(arr[i]>max1){
    //         max1=arr[i];
    //     }
    // }
    // cout<<max1<<endl;

    // for(int i=0;i<n;i++){
    //     if(arr[i]==max1) continue;
    //     else if(arr[i]>max2){
    //         max2=arr[i];
    //     }
    // }
    // cout<<max2<<endl;

    // print(arr,n);
    // int *p =&arr[7];
    // cout<<p<<endl;
    // return 0;

    
}