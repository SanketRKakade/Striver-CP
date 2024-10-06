#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int maxSubarrSize = 1, currentLength = 1;

    for (int i = 1; i < n; i++) {
        if (v[i] > v[i - 1]) {
            currentLength++;
            maxSubarrSize = max(maxSubarrSize, currentLength);
        } else {
            currentLength = 1;
        }
    }

    cout << maxSubarrSize << endl;

    return 0;
}
