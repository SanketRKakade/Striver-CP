#include <bits/stdc++.h>
using namespace std;

string solve(int n, int f, int k, vector<int>& v) {
    int fav = v[f - 1];
    sort(v.rbegin(), v.rend());
    
    int fav_count = count(v.begin(), v.end(), fav);
    
    int greater_count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] > fav) greater_count++;
    }
    
    if (greater_count >= k) {
        return "NO";
    }
    
    if (greater_count + fav_count <= k) {
        return "YES";
    }
    
    return "MAYBE";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        cout << solve(n, f, k, v) << endl;
    }
    return 0;
}
