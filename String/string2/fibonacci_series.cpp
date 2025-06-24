#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==1 || n==2) return 1;
    int leftans=fibonacci(n-1);
    int rightans=fibonacci(n-2);
    return leftans+rightans;
}
int main(){
    //1 1 2 3 5 8 13 21 34 55 89 ....
    int n;
    cout<<"enter no of terms in fibonacci serirs :";
    cin>>n;
    cout<<fibonacci(n);
}