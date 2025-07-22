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
        int n;
        cin>>n;
        vector<int>v(n);
        loop(i,0,n) cin>>v[i];
        sort(all(v));
        int mx =v[n -1];
        int smx=v[n-2];

        ll c=0;
        loop(k,2,n) {
            ll t1= 2LL * v[k];
            ll t2;
            if(v[k]==mx) {
                t2=smx;
            }
            else{
                t2=mx;
            }
            ll lim =max(t1,t2) -v[k];

            int l=0, r=k-1;
            while(l<r) {
                ll addi = (ll)v[l]+v[r];
                if (addi>lim) {
                    c +=r-l;
                    r--;
                } else{
                    l++;
                }
            }
        }

        cout <<c<<endl;
    }

    return 0;
}
