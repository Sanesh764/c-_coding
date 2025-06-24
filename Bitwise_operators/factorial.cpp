#include<iostream>
#include<vector>
using namespace std;
vector<long long int>fact(int n){
    vector<long long int>v(n+1,1);
    int MOD=1000000000 + 7;
    for(int i=2;i<=n;i++){
        v[i]=((i%MOD) * (v[i-1]%MOD))%MOD;
    }
    return v;
}
int main(){
    vector<long long int> res=fact(25);
    for(int i=0;i<res.size();i++){
        cout<<i<<"!= " <<res[i]<<" "<<endl;;
    }
    return 0;
}