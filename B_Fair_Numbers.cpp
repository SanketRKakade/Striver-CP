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
bool is_fair(ll x) {
    ll original = x;
    while (x > 0) {
        int digit = x % 10;
        if (digit != 0 && original % digit != 0) {
            return false;
        }
        x /= 10;
    }
    return true;
}
ll find_min_fair_number(ll n) {
    ll x = n;
    while (!is_fair(x)) {
        x++;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << find_min_fair_number(n) << '\n';
    }
    return 0;
}
