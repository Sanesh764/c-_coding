#include<iostream>
#include<stack>
using namespace std;

void display(stack<int>& st ){
    if(st.size()==0) return ;
    int x= st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}
void pusAtbottom(stack<int>& st,int val ){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x= st.top();
    st.pop();
    pusAtbottom(st,val);
    st.push(x);
}
void reverse(stack<int> &st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pusAtbottom(st,x);
}
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<endl;
    display(st);
    // pusAtbottom(st,60);
    cout<<endl;
    reverse(st);
    display(st);
    
}