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
        ll a,b,c,n;
        cin>>a>>b>>c>>n;

        ll maxi = max(a,max(b,c));
        ll want = (maxi-a) + (maxi-b) + (maxi-c);

        if(n>=want && (n-want)%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}