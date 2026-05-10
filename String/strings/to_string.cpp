#include<iostream>
using namespace std;

int main() {
    //  int a=123455;
    //  string p=to_string(a);
    //  string str="sanesh";
    //  cout<<p+str;
     //to_string(a);
   
    //  int b=12;
    //  int sum=a+b;
    //  cout<<sum;

    string str="abbcdeffghh";
    int count=0;
    int i=0;
    while(i<str.length()-1){
        if(str[i]!=str[i+1]){
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    return 0;
}