#include <iostream>
#include <climits>
#include<vector>
using namespace std;

#define inf INT_MAX

int f(int n) {
    if (n == 1) return 1;
    if (n == 2 || n == 3) return 1;
    int a = f(n - 1);
    int b = (n % 2 == 0) ? f(n / 2) : inf;
    int c = (n % 3 == 0) ? f(n / 3) : inf;
    return 1 + min(a, min(b, c));
}

vector<int>dp;

int ftd(int i) {
    if (i == 1) return 1;
    if (i == 2 || i == 3) return 1;
    if(dp[i]!=-1) return dp[i];//nth state is precomuted
    //if(dp[n] is -1 we need t compure first time this state
    int a = ftd(i - 1);
    int b = (i % 2 == 0) ? ftd(i / 2) : inf;
    int c = (i % 3 == 0) ? ftd(i / 3) : inf;
    return 1 + min(a, min(b, c));
}
int fbu(int n){
    dp.clear();
    dp.resize(n+1, inf);

    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    for(int i = 4; i <= n; i++){
        int a = dp[i - 1];
        int b = (i % 2 == 0) ? dp[i / 2] : inf;
        int c = (i % 3 == 0) ? dp[i / 3] : inf;
        dp[i] = 1 + min(a, min(b, c));
    }
    return dp[n];
}


int main() {//n->100
    int n;
    cout << "enter the number: ";
    cin >> n;
    dp.clear();
    dp.resize(1005,-1);
    cout << ftd(n)<<" "<<fbu(n)<< "\n";
    return 0;
}
