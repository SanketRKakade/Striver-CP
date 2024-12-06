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
#define loop(i, a, b) for(int i = a; i < b; i++)
#define rloop(i, a, b) for(int i = a; i >= b; i--)

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
        ll p;
        cin >> n >> p;

        vi a(n), b(n);
        loop(i, 0, n) cin >> a[i];
        loop(i, 0, n) cin >> b[i];

        vector<pair<ll, ll>> residents;
        loop(i, 0, n) {
            residents.pb(mp(b[i], a[i])); // Store cost b and max share count a
        }

        // Sort by cost of sharing (b[i])
        sort(all(residents));

        ll total_cost = 0;
        ll remaining_residents = n;

        for (auto &[cost, max_share] : residents) {
            if (remaining_residents <= 0) break;

            ll can_share = min(remaining_residents, max_share);
            total_cost += cost * can_share;
            remaining_residents -= can_share;
        }

        total_cost += p * (n - remaining_residents);
        
        cout << total_cost << "\n";
    }
    return 0;
}
