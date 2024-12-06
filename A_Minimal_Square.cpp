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
        int a,b;
        cin>>a>>b;
        int side1 = max(2*a,b);
        int side2 = max(a,2*b);
        int side3 = max(a+b,max(a,b));
        
        int min_side = min(side1,min(side2,side3));
        cout << min_side *min_side <<endl;
    }
    return 0;
}