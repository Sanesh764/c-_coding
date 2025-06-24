#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(7);
    v.push_back(4);
    v.push_back(9);
    display(v);
    cout<<endl;

    //using while loop
    // int n=v.size();
    // int i=0;
    // int j=n-1;
    // while(i<=j){
    // swap(v[i],v[j]);
    // i++;
    // j--;
    // }

    //using for loop
    int n=v.size();
    for(int i=0,j=n-1;i<=j;i++,j--){
        swap(v[i],v[j]);
    }
    display(v);
}