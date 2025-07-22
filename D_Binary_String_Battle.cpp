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
        int n, k;
        cin >> n>> k;

        string s;
        cin >> s;

        int cnt_one= 0;
        for(char c : s)
            if (c =='1') cnt_one++;

        if(cnt_one<= k || k > n / 2)
            cout << "Alice"<<endl;
        else
            cout <<"Bob"<<endl;
    }
    return 0;
}