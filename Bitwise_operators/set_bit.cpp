/*set bit oo hota hai jo koi number ko hm 
jab hm binary me convert karte hai to kitna number 
uske 1 present hai usko ko return kar do 
ex-->> 001101 ===>> 3 set bit present hai bez 3 one are present*/
#include<iostream>
using namespace std;
//inbuilt function in c++
int count_set_bits(int n){
    return  __builtin_popcount(n);
}
//khud ka logics
int count_set_bits2(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n&(n-1));
    }
    return count;
}
int main(){
    cout<<count_set_bits(78)<<endl;
    cout<<count_set_bits2(78)<<endl;
}