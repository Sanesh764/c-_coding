#include<iostream>
#include<stack>
using namespace std;
string solve(string val1,string val2,int ch){
    //pre to In
    //infix is : v1 op v2
    string s="";
    s += val1;
    s.push_back(ch);
    s += val2;
    return s;
}
int main() {
    string s="-/*+79483";//pre expression
    //we need  1 stack ->values
    stack<string> val;
    for(int i=s.length()-1;i>=0;i--){
        //cheak if s[i] is a digit ascii value of 0=48 and 9=57
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{ //s[i] it is ->* ,/,+,-
            //kam
        string val1=val.top();
            val.pop();
            string val2=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]);
            val.push(ans);
        }
    }
    cout<<val.top()<<endl;
    cout<<(7+9)*4/8-3<<endl;
    return 0;
}