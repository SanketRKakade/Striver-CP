#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> points(n);
        vector<ll> queries(q);
        
        for (int i = 0; i < n; i++) {
            cin >> points[i];
        }

        for (int i = 0; i < q; i++) {
            cin >> queries[i];
        }

        vector<pair<ll, ll> > store;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                store.push_back(make_pair(points[i], points[j]));
            }
        }

        // for (int i = 0; i < store.size(); i++) {
        //     cout << store[i].first << " " << store[i].second << endl;
        // }
        

    }
    return 0;
}
