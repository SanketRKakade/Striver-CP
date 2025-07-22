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
        int n,s;
        cin>>n>>s;
        vi v(n);
        loop(i,0,n) cin>>v[i];
        sort(v.begin(),v.end());
        int first = v[0];
        int last = v[v.size()-1];
        if(n==1 && v[0]==s) cout<<0<<endl;
        else if(n==1) cout<<abs(s-v[0])<<endl;
        else if(s<v[0]) cout<<v[v.size()-1]-s<<endl;
        else if(s>v[v.size()-1]) cout<<abs(v[0]-s)<<endl;
        else{
            int ans = abs(first-s)+abs(last-s)+abs(min(s-first,last-s));
            cout<<ans<<endl;
        }
        
    }
    return 0;
}

