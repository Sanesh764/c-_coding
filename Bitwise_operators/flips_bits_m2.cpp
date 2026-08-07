
#include<iostream>
using namespace std;

int main() {
    int x=90;
    int temp;
    while(x!=0){
        temp=2*x-1;
        x=x&(x-1);
    }
    cout<<(x^temp);
    return 0;
}