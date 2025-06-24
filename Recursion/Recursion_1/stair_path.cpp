//only one jump and two jumps are allowed
// #include<iostream>
// using namespace std;
// int stairpath(int n){
//     if(n==2) return 2;
//     if(n==1) return 1;

//     return stairpath(n-1) +stairpath(n-2);
// }
// int main(){
//     int n;
//     cout<<"enter number :";
//     cin>>n;

//     cout<<stairpath(n);
// }
//homework'
//one ,two and three jumps are allowed.

#include<iostream>
using namespace std;
int stairpath(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    if(n==3) return 3;

    return stairpath(n-1) +stairpath(n-2)+stairpath(n-3);
}
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;

    cout<<stairpath(n);
}