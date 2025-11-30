// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// vector<int> get_digits(int n){
//     vector<int> result;
//     while(n > 0){
//         int d = n % 10;
//         if(d != 0) result.push_back(d);
//         n /= 10;
//     }
//     return result;
// }


// vector<int> dp;
// int f(int n){
//     if(n==0) return 0;
//     if(n<=9) return 1;
//     if(dp[n]!=-1) return dp[n];
//     vector<int> d = get_digits(n);
//     int result = INT_MAX;
//     for(size_t i = 0; i < d.size(); i++){
//         result = min(result, f(n - d[i]));
//     }

//     return dp[n]=1+result;
// }

// int fbu(int num){
//     dp[0]=0;
//     for(int i=1;i<=9;i++){
//         dp[i]=1;
//     }
//     for(int n=10;n <=num ;n++){
//         //n=statr
//        // calc = dp[n]
//         vector<int> d=get_digits(n);
//         int result=INT_MAX;
//         for(int i=0;i<d.size();i++){
//             result= min(result,dp[n-d[i]]);
//         }
//         dp[n]=1+result;
//     }
//     return dp[num];
// }

// int main() {
//     int n;
//     cout<<"enter the value of n ";
//     cin>>n;
//     dp.resize(100005,-1);
//     cout<<f(n)<<endl;
//     return 0;
// }

// /*
// You are given an integer n. On each step, you may subtract one of the digits from the number.
// How many steps are required to make the number equal to 0?
// Input
// The only input line has an integer n.
// Output
// Print one integer: the minimum number of steps.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// 27

// Output:
// 5

// Explanation: An optimal solution is 27 \rightarrow 20 \rightarrow 18 \rightarrow 10 \rightarrow 9 \rightarrow 0.
// */

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> get_digits(int n){
    vector<int> result;
    while(n > 0){
        int d = n % 10;
        if(d != 0) result.push_back(d);
        n /= 10;
    }
    return result;
}

vector<int> dp;

int f(int n){
    if(n == 0) return 0;
    if(n <= 9) return 1;
    if(dp[n] != -1) return dp[n];

    vector<int> d = get_digits(n);
    int result = INT_MAX;

    for(size_t i = 0; i < d.size(); i++){
        result = min(result, f(n - d[i]));
    }

    return dp[n] = 1 + result;
}

int fbu(int num){
    dp[0] = 0;
    for(int i = 1; i <= 9; i++){
        dp[i] = 1;
    }

    for(int n = 10; n <= num; n++){
        vector<int> d = get_digits(n);
        int result = INT_MAX;

        for(size_t i = 0; i < d.size(); i++){
            result = min(result, dp[n - d[i]]);
        }

        dp[n] = 1 + result;
    }

    return dp[num];
}

int main() {
    int n;
    cin >> n;

    dp.resize(1000005, -1);  // fix size

    cout << f(n) << endl;
    return 0;
}
