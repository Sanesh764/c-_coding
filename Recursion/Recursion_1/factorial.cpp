#include<iostream>
using namespace std;
//using recursive function we can print factorial
int factorial(int n){
    if(n==1 || n==0) return 1;
    int ans=(n)*factorial(n-1);
    return ans;
}
//using for loop printing factorial
int fact(int n){
    int x=1;
    for(int i=1;i<=n;i++){
        x *= i;
        cout<<x<<endl;
    }
    //cout<<x<<endl;
}
int main(){
    int n;
   cout<<"enter numnber :";
   cin>>n;
    fact(n);
   // cout<<"the factorial of given number is :"<<factorial(n);
}