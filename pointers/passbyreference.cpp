#include<iostream>
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
//*ptr hamisa addrss store karta hai 
}
using namespace std;
int main(){
   int a,b;
   cout<<"enter value of a and b : ";
   cin>>a>>b;
   cout<<a<<" "<<b<<endl;
   swap(&a,&b);
   cout<<a<<" "<<b;
}