#include<iostream>
using namespace std;
class Stack{//user defined data struectre
    int arr[5];
    int idx;
public:
    Stack(){
        idx=-1;
    }
    void push(int val){
        int size=sizeof(arr)/sizeof(arr[0])-1;
        if(idx==size){
            cout<<"Stack is full"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"stack is empty.you can pop more element!";
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"stack is empty!"<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main() {
    Stack st;
    cout<<st.top()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.size()<<endl;
    st.display();
    
    return 0;
}