#include<iostream>
#include<vector>
using namespace std;
class MinHeap{
public:
    vector<int>arr;
    int idx;
    MinHeap(int x){
        idx = 1;
        for(int i=1;i<=x;i++){
            arr.push_back(0);
        }
    }
    int top(){
        return arr[1];
    }
    void push(int x){//x is acapacity
        arr[idx]=x;
        int i=idx;
        idx++;
        //swapping of i with parent till i==1
        while(i!=1){
            int parent=i/2;
            if(arr[i]<arr[parent]) swap(arr[i],arr[parent]);
            else break;
            i=parent;
        }
    }
    void pop(){
        idx--;
        arr[1]=arr[idx];
        //rearrangmenet
        int i=1;
        while(true){
            int leftchild= 2*i;
            int rightchild=2*i +1;

            if(leftchild>idx-1) break;
            if(rightchild>idx-1){
                if(arr[i]>arr[leftchild]){
                    swap(arr[i],arr[leftchild]);
                    i =leftchild;
                }
                break;
            }
            if(arr[leftchild]<arr[rightchild]){
                if(arr[i]>arr[leftchild]){
                    swap(arr[i],arr[leftchild]);
                    i =leftchild;
                }
                else break;
            }
            else{
                if(arr[i]>arr[rightchild]){
                    swap(arr[i],arr[rightchild]);
                    i =rightchild;
                }
                else break;
            }
        }
    }
    int size(){
        return idx-1;
    }
    void display(){
        for(int i=1;i<idx-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    MinHeap pq(25);//25 is max capacity
    pq.push(10);
    pq.push(20);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.push(11);
    pq.push(2);
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
    pq.pop();
    cout<<pq.top()<<" "<<pq.size()<<endl;
    pq.display();
    return 0;
}