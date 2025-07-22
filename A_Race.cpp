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
        int a,x,y;
        cin >>a>>x>>y;
        bool fine=false;
        loop(i,-1000,1000) {
            if (fine) break;
            if (i==a) continue;
            if (abs(i-x)< abs(a-x) && abs(i-y) <abs(a-y)) {
                fine = true;
            }
        }
        if(fine){
            cout<<"YES"<<endl;
        } else cout<<"NO"<<endl;
    }
    return 0;
}
