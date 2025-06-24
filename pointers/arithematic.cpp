#include<iostream>
using namespace std;
int main(){
    // int x=7;
    // int* ptr=&x;
    // cout<<ptr<<endl;//0x61ff08
    // ptr=ptr+1; 
    // cout<<ptr<<endl;//0x61ff0c

    // int x=7;
    // int* ptr=&x;
    // cout<<*ptr<<endl;//7
    // ptr=ptr+1;
    // cout<<*ptr<<endl;//6422284

    // bool flag=true;
    // bool* ptr=&flag;
    // cout<<ptr<<endl;//0x61ff0b
    // ptr++;
    // cout<<ptr<<endl;//0x61ff0c

    int x=7;
    int* ptr=&x;
    cout<<*ptr<<endl;//7
    *ptr=*ptr+1;//x=x+1;
   (*ptr)++;//always bracket me use karna
    cout<<*ptr<<endl;//8

  // int x=23;
  // int *ptr1=&x;

  // int y=21;
  // int *ptr2=&y;

  // cout<<(*ptr2)*(*ptr1);
}