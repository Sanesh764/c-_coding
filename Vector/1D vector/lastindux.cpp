#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;
    v1.push_back(9);
    v1.push_back(10);
    v1.push_back(6);
    v1.push_back(12);
    v1.push_back(11);
    v1.push_back(6);
    v1.push_back(0);
    int x=6;
    int idx=-1;
    // for(int i=0;i<v1.size();i++){
    //     if(v1[i]==x) idx=i;
    // }
    for(int i=v1.size()-1;i>=0;i--){
        if(v1[i]==x){
        idx=i;
        break;
        }
    }
    cout<<idx;

}