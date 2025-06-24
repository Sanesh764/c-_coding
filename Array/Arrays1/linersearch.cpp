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
    int x;
    cout<<"enter the elemet you want to search :";
    cin>>x;
    //search
    //cheakmark flag
    bool flag =false;//flase-->not present
      for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag=true;
      }
       if(flag==true) cout<<"elemet present";
       else cout<<" 404 element not present";
}