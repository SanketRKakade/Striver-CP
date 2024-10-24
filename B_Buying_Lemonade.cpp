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

ll solve(){
    ll n,k;
    cin>>n>>k;
    vi v(n);
    map<ll, ll> m;
    bool is = false;
    loop(i,0,n) {
        cin>>v[i];
        m[v[i]]++;
        if(v[i]==k){
            is=true;
        }
    }

    if(is) return k;

    ll cans = 0;
    ll press = 0;
    sort(v.begin(),v.end());
    ll i=0;
    ll j=n;
    while(cans<k){
        ll rem = k-cans;
        ll c = m[i];
        j-=c;
        if(rem<j){
            press+=rem+c;
            cans+=rem;
        }
        else{
            press+=c+j;
            cans += j;
        }
        
        i++;
    }
    return press;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        cout<<solve()<<endl;
    }
    return 0;
}