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
        cin>> n;
        vi a(n),b(n);
        loop(i,0,n) cin>>a[i];
        loop(i,0, n) cin>>b[i];
        ll ans =0;
        loop(l,0,101) {
            ll s= 0;
            loop(i,0,n){
                if (b[i]<= l && a[i]> 0) s+= a[i];
            }
            ans = max(ans,s-l);
        }
        cout << ans<<endl;
    }
    return 0;
}