#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(9);
    s.insert(7);
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(2);
    int target=11;
    //s.find()->it searchs in the set and if it is not found
    //then it return the last elemnet
    if(s.find(target)!=s.end()){//target exits 
        cout<<"exists element"<<endl;
    }
    else{
        cout<<"does,t exists eleement "<<endl;
    }

    cout<<"size of sets is "<<s.size()<<endl;
    for(auto ele : s){
        cout<<ele<<" ";
    }
    return 0;
}

