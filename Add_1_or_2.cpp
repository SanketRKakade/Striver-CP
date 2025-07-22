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

ll ans(int n, const vi& a, const vi& b) {
    ll sumb=accumulate(all(b),0LL);
    ll maxi = *max_element(all(a));
    ll r=maxi+2*sumb;
    ll l=maxi; 
    

    while (l < r) {
        ll mid = l + ((r-l) >>1);
        ll over=0, comp=0;

        loop(i,0,n) {
            ll diff = (ll)mid - a[i];
            ll use = min((ll)b[i],diff);
            over += b[i]-use;
            comp +=(diff - use)/2;
        }

        if (comp >= over){
            r = mid;
        }
        else{
            l = mid + 1;
        }
            
    }
    return l;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vi A(n);
        loop(i,0,n)cin>>A[i];
        vi B(n);
        loop(i,0,n)cin>>B[i];
        cout<<ans(n,A,B)<<endl;

    }
    return 0;
}
