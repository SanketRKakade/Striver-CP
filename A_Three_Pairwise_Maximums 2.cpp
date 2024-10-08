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
#define fab(a, b) for(int i = a; i < b; i++)

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
        int a[4];
        cin >> a[1] >> a[2] >> a[3];
        sort(a + 1, a + 1 + 3);
        if ((a[1] != a[2] && a[2] != a[3]) || (a[1] == a[2] && a[2] != a[3]))
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            cout << a[1] << " " << a[1] << " " << a[2] << endl;
    
        }
        
    }
    return 0;
}