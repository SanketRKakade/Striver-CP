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
        int n, x;
        cin >> n >> x;
        vi a(n);
        loop(i, 0, n) cin >> a[i];

        int changes = 0;
        ll L = a[0] - x, R = a[0] + x;

        loop(i, 1, n) {
            ll newL = a[i] - x;
            ll newR = a[i] + x;
            L = max(L, newL);
            R = min(R, newR);
            if (L > R) {
                changes++;
                L = newL;
                R = newR;
            }
        }

        cout << changes << '\n';
    }
    return 0;
}
