#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<"hello pw"<<endl;
    fun(n-1);
}
void greed(){
    cout<<"good moring\n";
    cout<<"how are you\n";
    cout<<"thanku\n";
}
int product(int x,int y){
    return x+y;
}
int main(){
    // int x=product(2,3);
    // greed();
    // cout<<x;
    fun(5);
}