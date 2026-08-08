#include<iostream>
#include<climits>
using namespace std;

int main() {
    int max=INT_MAX;
    cout<<max<<" ";
    cout<<endl;
    //cout<<(max+2)%5;//it give wrong ans bex max+2 add karne pr integer ke range say bahar chala jayega

    cout<<((max%5)+(2%5))%5;//it give correct ans
    cout<<endl;
    cout<<((max%5)*(13%5))%5;//it give correct ans
    return 0;
}