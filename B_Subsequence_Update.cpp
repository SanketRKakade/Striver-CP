#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        l--; r--;
        vector<int> outside, segment;
        for (int i = 0; i < n; i++) {
            if (i < l || i > r) {
                outside.push_back(a[i]);
            } else {
                segment.push_back(a[i]);
            }
        }

        sort(segment.begin(), segment.end());
        sort(outside.begin(), outside.end());

        int replaceCount = min((int)segment.size(), (int)outside.size());
        for (int i = 0; i < replaceCount; i++) {
            if (outside[i] < segment[segment.size() - 1 - i]) {
                segment[segment.size() - 1 - i] = outside[i];
            } else {
                break;
            }
        }

        int sum = accumulate(segment.begin(), segment.end(), 0);
        cout << sum << "\n";
    }

    return 0;
}