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
        vi s(n);
        loop(i, 0, n) cin >> s[i];

        if (s[0] == s[n - 1]) {
            loop(i, 1, n + 1) cout << i << ' ';
            cout << '\n';
            continue;
        }

        vi p(n);
        loop(i, 0, n) p[i] = i + 1;

        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                swap(p[i], p[i + 1]);
            }
        }

        if (p[0] == 1) {
            swap(p[0], p[n - 1]);
        }

        cout << (p[0] == 1 ? -1 : p[0]) << ' ';
        loop(i, 1, n) cout << p[i] << ' ';
        cout << '\n';
    }
    return 0;
}
