#include<iostream>
using namespace std;
int main(){
   
    int x=9;
    int* p=&x;
    cout<<p<<endl;//cout<<&x<<endl; both give same address
    
    cout<<*p<<endl;
}