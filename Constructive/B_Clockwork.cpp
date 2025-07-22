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

void sk(){
    ll n, t;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;
        
    for (ll i = 0; i < n; ++i)
    {
        t = 2 * (n - i - 1);
        if (a[i] <= t || a[i] <= 2 * i)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        sk();
    }
    return 0;
}