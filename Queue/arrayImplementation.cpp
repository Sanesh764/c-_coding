#include<iostream>
#include<vector>
using namespace std;
class Queue{
public:
    int f;//frunt
    int b;//back
    //int arr[5];
    int s;
    vector<int>arr;
    Queue(int val){
        f=0;
        b=0;
        s=0;
        vector<int> v(val);
        arr=v;
    }
    void push(int val){
        if(b==arr.size()){
            cout<<"queue is full!"<<endl;
            return;
        }
        arr[b]=val;
        b++;
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"queue is empty !"<<endl;
            return;
        }
        f++;
        s--;
    }
    int front(){
        if(s==0){
            cout<<"queue is empty !"<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(s==0){
            cout<<"queue is empty !"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    Queue q(5);
    //push,pop,front->top,size=empty,back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
    q.pop();
    q.display();
    return 0;
}