#include<iostream>
using namespace std;
int main(){
    // int n=5;
    // for(int i=5;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    int n;
    cout<<"enter number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}