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

ll ans(int n,const vi& a,const vi& b) {
    ll sumb = accumulate(all(b), 0LL);
    ll maxi = *max_element(all(a));
    ll l=maxi;
    ll r=maxi+2*sumb;

    while(l<r) {
        ll mid =l+((r-l)>>1);
        __int128 over=0;
        __int128 comp=0;

        loop(i,0,n) {
            __int128 diff = (__int128)mid - a[i];
            __int128 use = min((__int128)b[i], diff);
            over += b[i] - use;
            comp += (diff - use) / 2;
        }

        if (comp >= over) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }

    return l;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi A(n), B(n);
        loop(i, 0, n) cin >> A[i];
        loop(i, 0, n) cin >> B[i];
        cout << ans(n, A, B) << '\n';
    }
    return 0;
}
