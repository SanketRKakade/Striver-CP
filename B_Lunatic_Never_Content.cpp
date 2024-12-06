#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define loop(i,a,b) for(int i = a; i < b; i++)
#define rloop(i,a,b) for(int i = a ; i>=b ; i--)

#ifndef ONLINE_JUDGE
#else
#define debug(...) 42
#endif

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        loop(i, 0, n) cin >> a[i];

        vi diffs;
        loop(i, 0, n / 2) {
            if (a[i] != a[n - i - 1]) {
                diffs.pb(abs(a[i] - a[n - i - 1]));
            }
        }

        if (diffs.empty()) {
            cout << 0 << '\n';
        } else {
            ll gcd_result = diffs[0];
            loop(i, 1, diffs.size()) {
                gcd_result = gcd(gcd_result, diffs[i]);
            }
            cout << gcd_result << '\n';
        }
    }
    return 0;
}
