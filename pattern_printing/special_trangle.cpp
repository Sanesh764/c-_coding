#include<iostream>
using namespace std;
int main(){
    int n=5;
    int j=1;
    for(int i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
            for(int k=1;k<=n-i+1;k++){
                cout<<k<<"";
            }
            cout<<endl;
    }
}