#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<float>v={1.2,3.2,3.6,1.234};
    // cout<<v.size()<<endl;
    // for(float i=1;i<=v.size();i++){
    //     cout<<i<<" ";
   // }
vector<int> v;
v.resize(10);
cout << v.capacity() << endl;
v.resize(90);
cout << v.capacity() << endl;
}