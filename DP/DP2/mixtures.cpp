#include<iostream>
#include<vector>
#include <cstring>
#include<climits>
#define ll long long int 
using namespace std;
ll dp[105][105];

ll g(vector<int>colors,int i,int j){
    ll result=0;
    for(int m=i;m<=j;m++){
        result=(result%100+ colors[m]%100)%100;
    }
    return result;
}

ll f(vector<int> &colors,int i,int j){
    if(i==j) return dp[i][j]= 0;
    if(dp[i][j]!=-1) return dp[i][j];
    ll result=INT_MAX;
    for(int k=i;k<=j-1;k++){
        result=min(result,f(colors,i,k)+f(colors,k+1,j)+g(colors,i,k)*g(colors,k+1,j));
    }
    return dp[i][j]= result;
}

ll fbu(vector<int>&colors){
    memset(dp,0,sizeof dp);
    int n=colors.size();
    for(int len=2;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            int j=i+len-1;
            ll result=INT_MAX;
            for(int k=i;k<=j-1;k++){
                result=min(result,dp[i][k]+dp[k+1][j]+g(colors,i,k)*g(colors,k+1,j));
            }
            dp[i][j]= result;
        }
    }
    return dp[0][n-1];
}
int main() {
    int n;
    while(cin>>n){
        vector<int>colors;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            colors.push_back(x);
        }
        memset(dp,-1,sizeof dp);

        //cout<<f(colors,0,colors.size()-1)<<"\n";
        cout<<fbu(colors)<<"\n";
        colors.clear();
        
    }
    return 0;
}









/*
Harry Potter has n mixtures in front of him, arranged in a row. Each mixture has one of 100 different colors (colors have numbers from 0 to 99).

He wants to mix all these mixtures together. At each step, he is going to take two mixtures that stand next to each other and mix them together, and put the resulting mixture in their place.

When mixing two mixtures of colors a and b, the resulting mixture will have the color (a+b) mod 100.

Also, there will be some smoke in the process. The amount of smoke generated when mixing two mixtures of colors a and b is a × b.

Find out what is the minimum amount of smoke that Harry can get when mixing all the mixtures together.

Input
There will be a number of test cases in the input.

The first line of each test case will contain n, the number of mixtures, 1 ≤ n ≤ 100.

The second line will contain n integers between 0 and 99 - the initial colors of the mixtures.

Output
For each test case, output the minimum amount of smoke.

Example
Input:
2
18 19
3
40 60 20

Output:
342
2400
In the second test case, there are two possibilities:

first mix 40 and 60 (smoke: 2400), getting 0, then mix 0 and 20 (smoke: 0); total amount of smoke is 2400
first mix 60 and 20 (smoke: 1200), getting 80, then mix 40 and 80 (smoke: 3200); total amount of smoke is 4400
The first scenario is a much better way to proceed.
*/