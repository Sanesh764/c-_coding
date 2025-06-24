#include<iostream>
using namespace std;
int main(){
   //referencing
    int x=9;
    int* p=&x;
    cout<<x<<endl;
    //dereferencing
    *p=788;
    cout<<x<<endl;
    int b=*p;
    cout<<b;
}