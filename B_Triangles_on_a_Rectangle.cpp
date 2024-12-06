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

    int t;
    cin >> t;
    while (t--) {
        ll w, h;
        cin >> w >> h;

        ll k1, k2;
        cin >> k1;
        vi x1(k1);
        for (int i = 0; i < k1; i++) cin >> x1[i];
        
        cin >> k2;
        vi x2(k2);
        for (int i = 0; i < k2; i++) cin >> x2[i];

        ll max_length_h1 = x1[k1 - 1] - x1[0]; 
        ll max_length_h2 = x2[k2 - 1] - x2[0]; 

        ll k3, k4;
        cin >> k3;
        vi y1(k3);
        for (int i = 0; i < k3; i++) cin >> y1[i];
        
        cin >> k4;
        vi y2(k4);
        for (int i = 0; i < k4; i++) cin >> y2[i];

        ll max_length_v1 = y1[k3 - 1] - y1[0]; 
        ll max_length_v2 = y2[k4 - 1] - y2[0]; 

        ll max_area = max(max(max_length_h1 * h, max_length_h2 * h), max(max_length_v1 * w, max_length_v2 * w));
        cout << max_area << "\n";
    }
    return 0;
}
