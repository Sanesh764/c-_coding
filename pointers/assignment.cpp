#include<iostream>
using namespace std;
int product(int* ptr1,int* ptr2){
    int product=(*ptr1)*(*ptr2);
    return product;
}
int main(){
    // int n1,n2;
    // cout<<"enter value of n1 nad n2 : ";
    // cin>>n1>>n2;
    // cout<<product(&n1,&n2);

// int a = 10, b = 20;
// int *ptr = &a;
// b = *ptr + 1;
// ptr = &b;
// cout<<*ptr<<" "<<a<<" "<<b;

int a = 15, b = 15;
int *ptr = &a;
int *ptr2 = &b;
*ptr = *ptr2;

cout<<&ptr<<endl<<&ptr2;

}