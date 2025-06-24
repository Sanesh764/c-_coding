#include<iostream>
using namespace std;
void product(int* ptr1,int* ptr2){
    int product=(*ptr1)*(*ptr2);
    
}
int main(){
    // int x=5;
    // int *ptr=&x;
    // // cout<<&ptr<<endl;//0x61ff08
    // // cout<<ptr<<endl;//0x61ff0c
    // cout<<*ptr<<endl;//5
    // //cout<<&x;

    // int a,b;
    // cout<<"enter your value of a and b :";
    // cin>>a>>b;
    // int* ptr1=&a;
    // int* ptr2=&b;
    
    // product(ptr1,ptr2);
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;
    cout<<*ptr;

return 0;
}