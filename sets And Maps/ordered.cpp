#include<iostream>
#include<set>
#include<map>
using namespace std;

int main() {
    // set<int>s;
    // s.insert(3);
    // s.insert(1);
    // s.insert(10);
    // s.insert(5);
    // for(auto ele : s){
    //     cout<<ele<<" ";
    // }

    map<string,int> m;
    m["sanesh"]=20;
    m["santosh"]=30;
    m["suman"]=20;
    for(auto ele : m){
        cout<<ele.first<<" ";
    }
    return 0;
}