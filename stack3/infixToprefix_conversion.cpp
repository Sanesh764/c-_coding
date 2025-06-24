#include<iostream>
#include<stack>
using namespace std;
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;//if ch=='*' ||ch=='/'
}
string solve(string val1,string val2,char ch){
    //we have to store prefic in the ans
    //prefix is ==> operator ,value 1,value 2
    string s="";
    s.push_back(ch);
    s += val1;
    s += val2;
     return s;
}
int main() {
    string s="(2+6)*4/8-3";//infix expression
    //we need two stack ,1 for value 1 for operator
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.length();i++){
        //cheak if s[i] is a digit ascii value of 0=48 and 9=57
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{//s[i] it is ->operator *,/,+,-,(,)
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    //work
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop();//opening bracket ko uda diya
            }
            else if(priority(s[i])>priority(op.top())) op.push(s[i]);
            else{//work priority(s[i]<=priority(op.top()));
                while(op.size()>0 && priority(s[i]) <= priority(op.top())){
                //i have yo do val1 op val2
                char ch=op.top();
                op.pop();
                string val2=val.top();
                val.pop();
                string val1=val.top();
                val.pop();
                string ans=solve(val1,val2,ch);
                val.push(ans);
            }
                op.push(s[i]);
            }
        }
    }
    //the operator stack can have values
    //so make it empty
    while(op.size()>0){
        //work
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    return 0;
}