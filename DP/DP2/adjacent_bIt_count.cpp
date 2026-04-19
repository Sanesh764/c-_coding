#include<iostream>
#include<cstring>
using namespace std;
int dp[105][105][2];
int f(int n,int k,int last){
    if(n==0) return 0;
    if(n==1){
        if(k==0) return 1;
        else return 0;
    }
    if(dp[n][k][last]!=-1) return dp[n][k][last];
    if(last==1){
        return dp[n][k][last]=f(n-1,k,0)+f(n-1,k-1,1);
    } else{
        return dp[n][k][last]=f(n-1,k,0)+f(n-1,k,1);
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int num,n,k;
        cin>>num>>n>>k;
        memset(dp,-1,sizeof dp);
        int ans=f(n,k,0)+f(n,k,1);
        cout<<num<<" "<<ans<<"\n";
    }
    return 0;
}

//input 
/*
10
1 5 2
2 20 8
3 30 17
4 40 24
5 50 37
6 60 52
7 70 59
8 80 73
9 90 84
10 100 90
*/

/*
Output:
1 6
2 63426
3 1861225
4 168212501
5 44874764
6 160916
7 22937308
8 99167
9 15476
10 23076518
*/