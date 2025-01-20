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
        int a,b,d,e;
        cin>>a>>b>>d>>e;
        int first = a+b;
        int sec = d-b;
        int third = e-d;

        if (first == sec && sec == third) {
            cout<<3<<endl; 
        } 
        else if (first == sec || sec == third || first == third) {
            cout<<2<<endl;
        } 
        else {
            cout<<1<<endl;
        }
    }
    return 0;
}