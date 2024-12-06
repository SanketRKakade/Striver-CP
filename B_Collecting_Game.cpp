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
#define loop(i, a, b) for(int i = a; i < b; i++)
#define rloop(i, a, b) for(int i = a; i >= b; i--)

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
        cin >> n;
        vi a(n);
        loop(i, 0, n) cin >> a[i];

        // To store results for the current test case
        vi result(n, 0);
        
        // Sort the array and process
        vi sorted_a = a;
        sort(all(sorted_a));

        // Process from largest to smallest
        int index = 0; // Pointer for the sorted array
        int score = 0;
        
        for (int i = 0; i < n; i++) {
            score = a[i];
            int removed_count = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] <= score) {
                    score += a[j];
                    removed_count++;
                }
            }
            result[i] = removed_count - 1;
        }

        // Print results for this test case
        loop(i, 0, n) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
