#include<iostream>
using namespace std;
void display(int* a,int size){
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[],int size){
    b[0]=100;
}
int main(){
    int arr[]={1,4,2,7,4,2,34,43,234};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    //accessing the elements of arrays in another function
    //updatation,pass by valuse/pass by reference
     display(arr,size);
     change(arr,size);
     display(arr,size);
}