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
        char w;
        cin >> n >> w;
        string s;
        cin >> s;

        int maxs[2] = {0, 0}, last = -1;

        loop(f, 0, s.size()) {
            if (s[f] == 'g') {
                last = n + f;
                break;
            }
        }

        rloop(f, s.size() - 1, 0) {
            if (s[f] == 'g') last = f;
            if (s[f] == 'r') maxs[0] = max(maxs[0], last - f);
            if (s[f] == 'y') maxs[1] = max(maxs[1], last - f);
        }

        if (w == 'g') cout << 0 << "\n";
        else if (w == 'r') cout << maxs[0] << "\n";
        else cout << maxs[1] << "\n";
    }

    return 0;
}
