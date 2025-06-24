#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){//spaces
            cout<<" ";
        }
        for(int j=1;j<=i;j++){//stars
            cout<<j;
        }
        cout<<endl;
    }
}