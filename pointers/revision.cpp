#include<iostream>
using namespace std;

int main() {
    // int x=5;
    // cout<<&x<<endl;
    // int* ptr=&x;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    int arr[5]={1,2,3,4,5};
    int* ptr=&arr[5];
    //cout<<ptr<<endl;
    for(int i=0;i<5;i++){
        cout<<ptr<<endl;
    }
    return 0;
}