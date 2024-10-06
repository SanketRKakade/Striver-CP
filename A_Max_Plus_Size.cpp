#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        
        int maxi = INT_MIN;
        vector<int> indices;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > maxi) {
                maxi = a[i];
                indices.clear();
                indices.push_back(i);
            } else if (a[i] == maxi) {
                indices.push_back(i);
            }
        }

        int finalScore = INT_MIN;

        for (int index :indices) {
            int score = maxi + 1;

            for (int i = index -2; i >= 0; i -= 2) {
                score++;
            }

            for (int i = index + 2; i < n; i += 2) {
                score++;
            }

            finalScore =max(finalScore, score);
        }

        cout << finalScore << endl;
    }
    return 0;
}
