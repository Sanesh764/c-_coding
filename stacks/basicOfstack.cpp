#include<iostream>
#include<stack>
using namespace std;

int main() {
    stack<int>st;
    // cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top();
    // cout<<st<<endl;
    // while (st.size()>0){
    //     cout<<st.top()<<" ";
    //     // int x=st.pop();
    //     st.pop();
    // }
    stack<int> temp;
    while (st.size()>0){
        
        // int x = st.top();
        // st.pop();
        // temp.push(x);
        
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    return 0;
}
