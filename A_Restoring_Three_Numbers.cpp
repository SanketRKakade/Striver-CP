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
#define rloop(i,a,b) for(int i = a ; i >= b ; i--)

#ifndef ONLINE_JUDGE
#else
#define debug(...) 42
#endif

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi v(4);
    loop(i,0,4) cin>>v[i];
    sort(rall(v));
    cout << v[0]-v[1] <<' '<< v[0]-v[2]<<' '<<v[0]-v[3]<<endl;
    return 0;
}


