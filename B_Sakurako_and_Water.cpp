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
    cin >>t;
    while(t--) {
        int m;
        cin >>m;
        vector<vector<int> > matrix(m,vector<int>(m));
        loop(i,0,m) {
            loop(j,0,m) {
                cin >>matrix[i][j];
            }
        }
        int n = m;
        ll ans= 0;
        loop(startCol, 0, n) {
            int i = 0, j = startCol;
            int mini= INT_MAX;
            while (i < m && j < n) {
                // cout<<matrix[i][j];
                if (matrix[i][j] < 0) {
                    mini = min(mini, matrix[i][j]);
                }
                i++;
                j++;
            }
            if (mini != INT_MAX) ans += abs(mini);
        }
        loop(startRow, 1, m) {
            int i = startRow, j = 0;
            int mini = INT_MAX;
            while (i < m && j < n) {
                if (matrix[i][j] < 0) {
                    mini = min(mini, matrix[i][j]);
                }
                i++;
                j++;
            }
            if (mini!= INT_MAX) ans+= abs(mini);
        }
        cout << ans<< endl;
    }
    return 0;
}
