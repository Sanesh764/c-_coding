#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v={5,4,3,2,1};

    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}