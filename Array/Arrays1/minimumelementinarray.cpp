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
    //int min=arr[0];
    int min=INT_MAX;
    for(int i=0;i<=n-1;i++){
        if(min>arr[i]) min=arr[i];
    }
    cout<<"min elements in this array is :"<<min;

}