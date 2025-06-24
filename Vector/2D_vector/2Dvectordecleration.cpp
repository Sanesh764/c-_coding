#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v(3,vector<int>(4,2));
    cout<<v.size()<<endl;//no of rows 
    cout<<v[0].size()<<endl;//no of coloums
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}