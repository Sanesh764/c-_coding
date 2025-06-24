#include<iostream>
#include<string>
using namespace std;
// void removechar(string ans,string original){
//     if(original.length()==0){
//         cout<<ans;
//         return;
//     }
//     char ch=original[0];
//     if(ch=='a') removechar(ans,original.substr(1));
//     else removechar(ans+ch,original.substr(1));
    
//}

//more accurate.in space complicity
void removechar(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='a') removechar(ans,original,idx+1);
    else removechar(ans+ch,original,idx+1);
}
int main(){
    string str="sanesh kumar";
    // string s="";
    // for(int i=0;i<str.length();i++){
    //     if(str[i]!='a') s.push_back(str[i]);
    // }
    removechar("",str,0);
   // cout<<str;
}