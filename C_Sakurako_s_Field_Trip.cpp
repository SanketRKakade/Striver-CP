#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &i : v) {
            cin >> i;
        }

        int cnt = 0;  // to count the number of balanced subarrays

        // Iterate over all possible subarrays
        for (int i = 0; i < n; i++) {
            int psum = 0; // positive sum
            int nsum = 0; // negative sum
            for (int j = i; j < n; j++) {
                if (v[j] > 0) {
                    psum += v[j];  // accumulate positive sum
                } else {
                    nsum += abs(v[j]);  // accumulate negative sum
                }

                // If both sums are equal, we found a balanced subarray
                if (psum == nsum && psum != 0) {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
