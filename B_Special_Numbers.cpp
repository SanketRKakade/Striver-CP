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

#define mod 1000000007

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        ll ans=0;
        ll base=1;
        while(k){
            ans=(ans+base*(k&1))%mod;
            base=(base*n)%mod,k>>=1;
        }
        cout<<ans<<endl;
    }
    return 0;
}