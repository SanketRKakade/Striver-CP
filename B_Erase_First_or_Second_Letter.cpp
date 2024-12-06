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
#define loop(i, a, b) for (int i = a; i < b; i++)
#define rloop(i, a, b) for (int i = a; i >= b; i--)

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
        string s;
        cin >> n >> s;

        set<string> uniqueSubstrings;
        for (int i = 0; i < n; i++) {
            uniqueSubstrings.insert(s.substr(i));
        }
        for (int i = 1; i < n; i++) {
            uniqueSubstrings.insert(s.substr(i));
        }
        
        cout << uniqueSubstrings.size() << "\n";
    }
    return 0;
}
