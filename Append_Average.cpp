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

const ll INF = 1e18;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        int n;
        ll k;
        cin >>n>>k;
        ll s= 0; 
        ll a =LLONG_MAX;
        ll b=LLONG_MAX;
         loop(i,0,n){
            ll x;
            cin>>x;
            s +=x;
            if(x< a){
                b =a;
                a=x;
            }
            else if(x<b){
                b =x;
            }
        }
        ll d= b-a; 
        ll c= 0;
        if(d>0){
            ll m= 0;
            if(d> 1) {
                int x=d - 1;
                m = 63- __builtin_clzll(x);
            }
            ll lim =min(k,m);
            ll y =d;

            loop(i,1, lim +1) {
                y= (y + 1)>>1;
                c+=y;
            }

            if(k>m){
                c+= (k-m);
            }
        }
        __int128 res =(__int128)s+(__int128)k* a+(__int128)c;
        cout<<(ll)res<<endl;

    }
    return 0;
}