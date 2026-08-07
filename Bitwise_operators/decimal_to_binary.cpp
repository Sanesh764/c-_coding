#include<iostream>
using namespace std;
string desimal_to_binary(int n){
    string result="";
    while(n>0){
        if(n%2==0){//even
            result = "0"+result;
        }
        else{
            //odd
            result = "1"+result;
        }
        n =n/2;
    }
    return result;
}
int main(){
    int n;
    cout<<"enter your number to convert desimal to binary :";
    cin>>n;
    cout<<desimal_to_binary(n)<<endl;
}