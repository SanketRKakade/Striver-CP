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
    cin>>t;
    while(t--) {
        int n,m;
        cin >>n>>m;
        vector<vector<int>> a(n,vector<int>(m));
        int g = 0;

        loop(i, 0,n){
            loop(j,0,m) {
                cin >> a[i][j];
                g = max(g,a[i][j]);
            }
        }
            
        vector<pair<int, int>> p;
        loop(i,0,n){
            loop(j,0,m){
                if(a[i][j] == g){
                    p.pb(mp(i, j));
                }
            } 
        }
            
                    
        bool cr=false;
        loop(r, 0,n) {
            if(cr) break;
            unordered_set<int>c;
            for (auto &x : p){
                if(x.ff != r) {
                    c.insert(x.ss);
                    if (c.size() > 1) break;
                }
            }
                
            if(c.size() <= 1){
                cr = true;
            }
                
        }

        if(cr) cout << g - 1 << "\n";
        else cout << g << "\n";

        }

    return 0;
}
