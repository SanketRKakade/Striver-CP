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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    priority_queue<int> pq;
    
    for (int i = 0; i < 31; i++) {
        if (n & (1 << i)) {
            pq.push(1 << i);
        }
    }

    if (pq.size() > k || pq.size() < k) {
        cout << "NO\n";
        return 0;
    }

    while (pq.size() < k) {
        int x = pq.top();
        pq.pop();
        pq.push(x / 2);
        pq.push(x / 2);
    }

    if (pq.size() != k) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        vector<int> result;
        while (!pq.empty()) {
            result.pb(pq.top());
            pq.pop();
        }
        sort(all(result));
        for (int x : result) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
