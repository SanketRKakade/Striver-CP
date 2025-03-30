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

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll a = 0, b = 0, ans = 0;
        
        for(ll i = 0; i < s.length(); i++) {
            if(s[i] == '-') a++;
            else b++;
        }

        if(n < 3) {
            cout << 0 << endl;
            continue;
        }
        if(b == 0 && a < 2) {
            cout << 0 << endl;
            continue;
        } else {
            ll first = a / 2;
            ll second = a - first;
            ll third = b;
            cout << (first * second) * third << endl;
        }
    }
    return 0;
}
