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
        string s;
        cin >>n>>s;

        int pre =0;
        loop(i,0,n){
            if(s[i] ==s[0])pre++;
            else break;
        }
        int suf= 0;
        rloop(i,n-1,0) {
            if(s[i]== s[n-1])suf++;
            else break;
        }
        int ans= pre+suf +(s[0]!= s[n-1]);
        if (ans>n) ans=n;
        cout <<ans <<endl;
    }
    return 0;
}