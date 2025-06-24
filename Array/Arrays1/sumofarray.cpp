#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array :";
    cin>>n;
    int arr[n];
    int sum=0;
    cout<<"enter elemnet of an arrays :";
    //input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    //output
      for(int i=0;i<=n-1;i++){
        sum+=arr[i];
    }
    cout<<sum;
}