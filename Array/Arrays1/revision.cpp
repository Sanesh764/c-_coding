#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[]={2,4,5,7,1,90,64,231,122};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max1=INT_MIN;
    int max2=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    cout<<max1<<endl;

    for(int i=0;i<n;i++){
        if(arr[i]==max1) continue;
        else if(arr[i]>max2){
            max2=arr[i];
        }
    }
    cout<<max2<<endl;
    return 0;
}