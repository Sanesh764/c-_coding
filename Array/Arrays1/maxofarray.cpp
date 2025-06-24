#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter elemnet of an arrays :";
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //int max=arr[0];
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<"max elements in this array is :"<<max;

}