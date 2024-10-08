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
#define debug(...) 42
#else
#define debug(...) 42
#endif

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int k, r;
        cin >> k >> r;
        
        int n = 1;
        while (true) {
            int total_cost =n*k;
            int last_digit= total_cost %10;
            if (last_digit == 0 || last_digit ==r) {
                cout << n <<endl;
                break;
            }
            n++;
        }
    }
    return 0;
}
