#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s="abcdf";
    // cout<<s.substr(2,2);
    string str;
    cout<<"enter your string :";
    getline(cin,str);
    int n=str.length();
    //abcdefgh->n=8
    cout<<str.substr(n/2);
return 0;
}