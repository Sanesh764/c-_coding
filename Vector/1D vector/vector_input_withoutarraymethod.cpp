#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"enter vector elements :";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<5;i++){
        cout<<v[i];
    }
}