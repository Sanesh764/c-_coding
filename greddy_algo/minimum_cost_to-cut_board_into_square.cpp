
#include<iostream>
#include<vector>
#include <algorithm>
#define ll long long int
using namespace std;

bool cmp(ll x,ll y){
    return x > y;
}

ll mincostToBreakGrid(int n, int m, vector<ll>& vertical, vector<ll>& horizontal){
    sort(vertical.begin(), vertical.end(), cmp);
    sort(horizontal.begin(), horizontal.end(), cmp);

    int hz = 1, vr = 1;
    int h = 0, v = 0;
    ll ans = 0;

    while (h < horizontal.size() && v < vertical.size()) {
        if (vertical[v] > horizontal[h]) {
            ans += vertical[v] * vr;
            hz++;
            v++;
        } else {
            ans += horizontal[h] * hz;
            vr++;
            h++;
        }
    }

    while (h < horizontal.size()) {
        ans += horizontal[h] * hz;
        vr++;
        h++;
    }

    while (v < vertical.size()) {   // fixed index variable here
        ans += vertical[v] * vr;
        hz++;
        v++;
    }

    return ans;
}

int main() {
    int m, n;
    cout << "Enter the value of m and n: ";
    cin >> m >> n;

    vector<ll> vertical, horizontal;

    cout << "Enter vertical cut costs (" << m-1 << " values):\n";
    for (int i = 0; i < m-1; i++) {
        ll x;
        cin >> x;
        vertical.push_back(x);
    }

    cout << "Enter horizontal cut costs (" << n-1 << " values):\n";
    for (int i = 0; i < n-1; i++) {
        ll x;
        cin >> x;
        horizontal.push_back(x);
    }

    cout << mincostToBreakGrid(n, m, vertical, horizontal) << "\n";

    return 0;
}
