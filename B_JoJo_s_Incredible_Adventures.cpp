#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <cstddef> // Add this for size_t and nullptr_t

using namespace std;
using namespace __gnu_pbds;

template <class T>
using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int long long
typedef pair<int, int> II;
typedef vector<II> VII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef long long LL;
#define PB push_back
#define F first
#define S second
#define ALL(a) a.begin(), a.end()
#define SET(a, b) memset(a, b, sizeof(a))
#define SZ(a) (int)(a.size())
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL)
#define deb(a) cerr << #a << " = " << (a) << endl;
#define deb1(a) cerr << #a << " = [ "; for (auto it = a.begin(); it != a.end(); it++) cerr << *it << " "; cerr << "]\n";
#define endl "\n"
const long long mod = 1e9 + 7;

void solve() {
    string a;
    cin >> a;
    int n = SZ(a);
    a += a;

    int ans = 0;
    int cnt = 0;
    FOR(i, 0, 2 * n) {
        if (a[i] == '1')
            cnt++;
        else {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    ans = max(ans, cnt);
    int fans = 0;
    if (ans >= n) {
        fans = n * n;
    } else {
        FOR(i, 1, ans + 1) {
            fans = max(fans, i * (ans + 1 - i));
        }
    }
    cout << fans << endl;
}

signed main() {
    fast_io;
    int totalTests = 1;
    cin >> totalTests;
    for (int testNo = 1; testNo <= totalTests; testNo++) {
        solve();
    }
    return 0;
}
