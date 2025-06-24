#include<iostream>
#include<string>
using namespace std;
// bool ispalindrome(string s){
//     int i=0;
//     int j=s.length()-1;
//     while(i<j){
//         if(s[i]!=s[j]) return false;
//         i++;
//         j--;
//     }
//     return true;
// }
bool ispalindrome2(string s,int i,int j){
    if(i>j ) return true;
    if(s[i]!=s[j]) return false;
    else return ispalindrome2(s,i+1,j-1);
}
int main(){
    //using for loop
    string str="mom";
    //cout<<ispalindrome(str);
    cout<<ispalindrome2(str,0,str.length()-1);


}