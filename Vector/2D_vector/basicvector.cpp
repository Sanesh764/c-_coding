#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1;//{1,2,3}
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    cout<<"vecor 1 is : ";
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    vector<int>v2;//{4,5}
    v2.push_back(4);
    v2.push_back(5);
    cout<<"vecor 2 is : ";
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    vector<int>v3;//{6,7,8,9,10}
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    cout<<"vecor 3 is : ";
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    vector<vector<int>>v;//{{1,2,3},{4,5},{6,7,8,9,10}}
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout<<" 2D vector is :";
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
    }

    //cout<<v[0][2];
}