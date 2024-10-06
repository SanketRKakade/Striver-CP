#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    int max_b = *max_element(b.begin(), b.end());
    int min_b = *min_element(b.begin(), b.end());
    
    if (max_b == min_b) {
        long long ways = (long long)n * (n - 1) / 2;
        cout << 0 << " " << ways << endl;
    } else {
        long long count_max = count(b.begin(), b.end(), max_b);
        long long count_min = count(b.begin(), b.end(), min_b);
        long long max_diff = max_b - min_b;
        long long ways = count_max * count_min;
        cout << max_diff << " " << ways << endl;
    }

    return 0;
}
