#include<iostream>
void swap(int &x,int &y){
    int temp =x;//pass by reference
    x=y;
    y=temp;  
    return;
//sasta method
}
using namespace std;
int main(){
   int a,b;
   cout<<"enter your value of a and b :";
   cin>>a>>b;
   cout<<a<<" "<<b<<endl;
   swap(a,b);
   cout<<a<<" "<<b;
   
}