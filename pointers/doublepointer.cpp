#include<iostream>
using namespace std;
int main(){
 //double pointer is used to address of a single pointer 
    int x=9;
    int* ptr=&x;
    int** p=&ptr;
    cout<<x<<endl;//9
    cout<<*ptr<<endl;//9
    cout<<**p<<endl;//9

    cout<<&x<<endl;//0x61ff08
    cout<<ptr<<endl;//0x61ff08
    cout<<*p<<endl;//0x61ff08
}