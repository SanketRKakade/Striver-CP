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
        string s;
        cin >> s;
        int n = s.size();
        bool found = false;

        for (int i = 1; i < n; i++) {
            string a = s.substr(0, i);
            string b = s.substr(i);

            if ((a.size()>1 && a[0]=='0') || (b.size()>1 && b[0]=='0')) {
                continue;
            }

            ll a_num =stoll(a);
            ll b_num =stoll(b);

            if (a_num>0 && b_num>a_num) {
                cout<<a_num<<" "<<b_num<<endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}
