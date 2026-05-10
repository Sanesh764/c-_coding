#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="sanesh";
    int count=0;
    int i=0;
    // for(i=0;str[i]!='\0';i++){
    //     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
    //         count++;
    //     }
    // }
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;    
        }
        i++;
    }
    cout<<count;
return 0;
}