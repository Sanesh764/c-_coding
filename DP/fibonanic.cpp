#include<iostream>
#include<vector>
using namespace std;

//top down approch
int fibo(int n,vector<int>&dp){
    if(n<=1) return n;

    if(dp[n]!=-1) return dp[n];
    else return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
}
int main() {

    int n;
    cout<<"enter size of dp: ";
    cin>>n;
    vector<int>dp(n+1,-1);
    //cout<<fibo(n,dp);

    //bottom up approach
    if(n<=1) return n;
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
    return 0;
}