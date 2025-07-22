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
        vector<int> a(n);
        loop(i, 0,n) cin>>a[i];
        sort(rall(a));
        vector<ll>p(n + 1,0);
        loop(i,0,n) p[i+ 1]=p[i]+ a[i];
        vector<ll>res(2*n + 1,0);

        loop(m,0,n+1){
            loop(m2,0,m+1){
                ll s =p[m];
                ll add =0;
                if (m2> 0) {
                    ll f=m- m2;
                    ll l=m -1;
                    add =(ll)m2 *(f+l)/ 2;
                }
                s+=add;
                int cost=m +m2;
                if (cost<= 2* n)res[cost]=max(res[cost],s);
            }
        }

        loop(k,1, 2 *n + 1) res[k] =max(res[k],res[k-1]);
        loop(k,1,2 * n + 1) cout<<res[k]<<" \n"[k ==2*n];
    }
    return 0;
}