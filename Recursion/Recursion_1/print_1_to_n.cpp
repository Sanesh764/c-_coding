//method 1
//using extra parameter
#include<iostream>
using namespace std;
void print(int x,int n){
    if(n==0) return ;//base case
    cout<<x<<endl;
    print(x+1,n-1);
}
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    print(1,n);//calling function
}

//method 2
//without using extra parameter
// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return ;
//     print(n-1);
//     cout<<n<<endl;
// }
// int main(){
//     int x;
//     cout<<"enter numnber :";
//     cin>>x;

//     print(x);
// }