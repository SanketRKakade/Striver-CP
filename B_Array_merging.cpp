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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n), b(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        map<int, int> maxCount;
        
         int count = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                count++;
            } else {
                maxCount[a[i - 1]] = max(maxCount[a[i - 1]], count);
                count = 1;
            }
        }
        maxCount[a[n - 1]] = max(maxCount[a[n - 1]], count);
        
        count = 1;
        for (int i = 1; i < n; i++) {
            if (b[i] == b[i - 1]) {
                count++;
            } else {
                maxCount[b[i - 1]] = max(maxCount[b[i - 1]], count);
                count = 1;
            }
        }
        maxCount[b[n - 1]] = max(maxCount[b[n - 1]], count);
        
        int result = 0;
        for (auto &[key, val] : maxCount) {
            result = max(result, val);
        }

        cout << result << "\n";
    }
    return 0;
}
