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
        cin>>n;
        vi v(n+1);
        loop(i,1,n+1) cin>>v[i];
        int sol = v[1];
        loop(i,2,n+1){
            int k=i-1;
            int done = max(k,(int)v[i]+1);
            sol = min(done,sol);
        }
        cout<<sol<<endl;
    }
    return 0;
}