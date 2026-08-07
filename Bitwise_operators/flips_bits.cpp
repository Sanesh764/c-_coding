#include<iostream>
using namespace std;
int Flip_bits(int n){
    int x=n;
    x=x |(x>>1);
    x=x |(x>>2);
    x=x |(x>>4);
    x=x |(x>>8);
    x=x |(x>>16);
    return (x^n);
}
//if the input is 7 => 111 then output becomes 000
int main(){
    int y=9;
    cout<<Flip_bits(y)<<"\n";
}