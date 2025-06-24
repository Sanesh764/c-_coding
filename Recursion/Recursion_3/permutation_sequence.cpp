#include<iostream>
#include<string>
#include<vector>
using namespace std;
void permutations(vector<string>& v,string ans ,string original){
    if(original==""){
        v.push_back(ans);
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutations(v,ans+ch,left+right);
    }
}
int main(){
    string str="123";
    vector<string>v;
    permutations(v,"",str);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    // //cout<<str.substr(1,2);
    // string left=str.substr(0,2);
    // cout<<left<<endl;

    // string right=str.substr(2+1);
    // cout<<right<<endl;

}
