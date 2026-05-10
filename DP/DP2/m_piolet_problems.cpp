#include<iostream>
#include<vector>
#include<cstring>
#define ll long long int
ll dp[10005][5005];
ll as[10005], cap[10005];
int n;
using namespace std;
ll calc(int i,int x){
    if(dp[i][x]!=-1) return dp[i][x];
    if(i==n) return 0;
    if(x==0){
        return dp[i][x]=calc(i+1,x+1)+as[i];
    } else if(x==n/2){
        return dp[i][x]=calc(i+1,x-1)+cap[i];
    }else{
        return dp[i][x]=min(calc(i+1,x+1)+as[i],calc(i+1,x-1)+cap[i]);
    }
}
int main() {
     cin>>n;
    for (int i=0;i<n;i++) {
        cin>>as[i]>>cap[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<calc(0, 0);
    return 0;
}