#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return ;//base case
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    print(n);//calling function
}