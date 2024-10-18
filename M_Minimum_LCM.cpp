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

inline void upd(int& n, int& t, int x) { if ((n - x) % x == 0 && x > t) t = x; }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T,n,t;
    cin >> T;
    while (T--) {
        cin >> n; 
        t = 1;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                upd(n, t, i);
                upd(n, t, n / i);
            }
        }
        cout << t << " " << n - t << endl;
    }
    return 0;
}
