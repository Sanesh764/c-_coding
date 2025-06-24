#include<iostream>
using namespace std;
void find(int n,int* ptr1,int* ptr2){
    *ptr2=n%10;//last digit
    while(n>9){
        n/=10;
    }
    *ptr1=n;
    return;
}
void findNumberDigit(int n,int* ptr1,int* ptr2){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    cout<<count;
}
int main(){
int n;
cout<<"enter no of digits : ";
cin>>n;
int firstdigit,lastdigit;
int* ptr1 = &firstdigit;
int* ptr2 = &lastdigit;
//find(n,ptr1,ptr2);
findNumberDigit(n,ptr1,ptr2);
//cout<<firstdigit<<" "<<lastdigit;
}