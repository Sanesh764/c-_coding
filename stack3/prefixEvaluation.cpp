#include<iostream>
#include<stack>
using namespace std;
int solve(int val1,int val2,int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main() {
    string s="-/*+79483";//pre expression
    //we need  1 stack ->values
    stack<int> val;
    for(int i=s.length()-1;i>=0;i--){
        //cheak if s[i] is a digit ascii value of 0=48 and 9=57
        if(s[i]>=48 && s[i]<=57){
            val.push((s[i]-48));
        }
        else{ //s[i] it is ->* ,/,+,-
            //kam
            int val1=val.top();
            val.pop();
            int val2=val.top();
            val.pop();
            int ans=solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3<<endl;
    return 0;
}