#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of students :";
    cin>>n;
    int marks[n];
//input
    cout<<"enter marks of students : ";
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
//output
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35) cout<<i<<" ";
    }
}