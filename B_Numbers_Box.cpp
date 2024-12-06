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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        
        ll totalSum = 0;
        int minAbsVal = INT_MAX;
        int negativeCount = 0;

        loop(i, 0, n) {
            loop(j, 0, m) {
                cin >> grid[i][j];
                totalSum += abs(grid[i][j]);
                if (grid[i][j] < 0) negativeCount++;
                minAbsVal = min(minAbsVal, abs(grid[i][j]));
            }
        }

         if (negativeCount % 2 == 1) {
            totalSum -= 2 * minAbsVal;
        }

        cout << totalSum << '\n';
    }
    return 0;
}
