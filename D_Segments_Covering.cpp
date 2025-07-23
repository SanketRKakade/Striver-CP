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

const ll mod = 998244353;


ll fastpow(ll a, ll b) {
    ll r = 1;
    a %= mod;
    while (b) {
        if (b & 1) r = r * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    while (cin >> n >> m) {
        vector<vector<pair<int, ll>>> seg(m + 1);
        ll base = 1;
        loop(i, 0, n) {
            ll l, r, p, q;
            cin >> l >> r >> p >> q;
            ll den = (q - p + mod) % mod;
            base = base * den % mod;
            base = base * fastpow(q, mod - 2) % mod;
            ll prob = p % mod * fastpow(den, mod - 2) % mod;
            if (r <= m) seg[r].pb({(int)l, prob});
        }

        vi dp(m + 1);
        dp[0] = 1;
        loop(i, 1, m + 1) {
            for (auto &pr : seg[i]) {
                int l = pr.ff;
                ll w = pr.ss;
                if (l - 1 >= 0)
                    dp[i] = (dp[i] + dp[l - 1] * w % mod) % mod;
            }
        }

        ll ans = base * dp[m] % mod;
        if (ans < 0) ans += mod;
        cout << ans << '\n';
    }
    return 0;
}