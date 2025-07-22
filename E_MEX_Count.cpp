#include <bits/stdc++.h>
using namespace std;

// For each test case, calculate the answer array
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(n + 2, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] <= n) freq[a[i]]++;
    }
    vector<long long> res(n + 1, 0);
    long long ways = 1;
    for (int mex = 0; mex <= n; ++mex) {
        if (mex > 0 && freq[mex - 1] == 0) break;
        res[mex] = ways * (freq[mex] + 1);
        ways *= freq[mex];
    }
    for (int k = 0; k <= n; ++k) {
        cout << res[k] << " \n"[k == n];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
