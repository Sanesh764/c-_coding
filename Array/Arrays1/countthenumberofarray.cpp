#include<iostream>
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
    //enter the element you want fo search ka mtb yaha pr hai ki
    //jo bhi number inter kiya ussay jada number kitna present hai array me usko print karwa do
    int x;
    cout<<"enter the elemet you want to search :";
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}