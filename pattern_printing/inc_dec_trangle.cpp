/*1
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1*/
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++){
            cout<<k<<" ";
        }
        for(int k=i;k>0;k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}