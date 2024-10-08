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
#define fab(a,b) for(int i = a; i < b; i++)

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
        ll n;
        cin>>n;
        vi v(n);
        fab(0,n){
            cin>>v[i];
        }       
        sort(all(v));
        fab(0,n){
            vi sum(n/i);
        }
        sort(all(v));
        fab(0,n){
            cout<<v[i]<<" ";
        }
        
    }
    return 1;
}
