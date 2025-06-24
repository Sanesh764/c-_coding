#include<iostream>
#include<unordered_map>
using namespace std;
//also known as hash map or hashing
int main() {
   
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first="sanesh";
    p1.second=20;
    m.insert(p1);
    m["santosh"]=45;
    m["suman"]=100;
    m["niranjan"]=12;
    cout<<m.size()<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("sanesh");
    m.erase("priya");//can,t give any error in priya is not present
    cout<<m.size()<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m["suman"]<<endl;
    
    return 0;
}