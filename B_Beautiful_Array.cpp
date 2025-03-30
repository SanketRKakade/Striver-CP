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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        
        ll min_sum = b * k;
        ll max_sum = b * k + (n - 1) * (k - 1);
        
        if (s < min_sum || s > max_sum) {
            cout << -1 << '\n';
            continue;
        }
        
        vi a(n, 0);
        a[0] = b * k; 
        s -= a[0];
        
        loop(i, 1, n) {
            if (s > 0) {
                ll add = min(s, k - 1);
                a[i] += add;
                s -= add;
            }
        }
        
        if (s > 0) {
            a[0] += s;
        }

        loop(i, 0, n) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}
