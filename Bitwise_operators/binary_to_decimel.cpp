#include<iostream>
using namespace std;
int Binary_to_decimal(string &str){
    int n=str.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch=str[i];
        int nums=ch-'0';
        result=result+nums*(1<<(n-i-1));
    }
    return result;
}
int main(){
    string str="0111";
    cout<<"the given binary number "<<str<<" of desimal value is : -> ";
    cout<<Binary_to_decimal(str)<<endl;
}