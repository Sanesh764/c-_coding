#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="12345";
    int x=stoi(str);//stoi convert string to integer
    cout<<x<<endl;

    int a=1234567;
    string s=to_string(a);//it convert to integer to string

    cout<<a;

return 0;
}