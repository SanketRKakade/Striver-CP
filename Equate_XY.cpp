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



void check(ll m, ll d, ll z, ll c, ll &res) {
    loop(i,1,sqrt(m) + 1) {
        if (m%i == 0) {
            if(i % d == 0)res =min(res,abs(z-i) +c);
            ll j = m/i;
            if(j != i && j%d== 0) res =min(res,abs(z-j)+c);
        }
    }
}

pair<ll,ll>f1(ll x,ll y,ll z) {
    ll  a= gcd(x, z);
    ll b= y / gcd(y,z)* z;
    return {a,b};
}


pair<ll,ll>f2(ll x,ll y,ll z) {
    ll a = x/gcd(x,z)*z;
    ll b = gcd(y,z);
    return {a,b};
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) {
        ll x,y,z,c;
        cin>>x>>y>>z>>c;

        if(x==y) {
            cout<< 0<<endl;
            continue;
        }

        ll res =LLONG_MAX;

        auto [a1,b1] =f1(x,y,z);
        if (a1 ==b1) res=min(res,c);
        auto [a2,b2] =f2(x, y, z);
        if (a2 ==b2)res=min(res,c);

        auto s1=f1(x,y,z);
        auto s2= f2(x,y,z);

        auto [a3,b3] =f1(s1.ff,s1.ss,z);
        if (a3 ==b3)res =min(res,2*c);
        auto [a4,b4]= f2(s1.ff,s1.ss, z);
        if (a4 ==b4)res=min(res,2*c);

        auto [a5, b5] = f1(s2.ff, s2.ss, z);
        if (a5 ==b5) res = min(res, 2 * c);
        auto [a6,b6] =f2(s2.ff,s2.ss,z);
        if (a6 == b6) res = min(res,2*c);

        check(x,y, z,c, res);
        check(y, x, z,c,res);

        cout <<res<<endl;
    }

    return 0;
}
