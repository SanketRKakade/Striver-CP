#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pair<int, int> p;
    int mini = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(a[j] - a[i]) < mini && (abs(i-j)==1 || abs(i-j)==n-1)) {
                mini = abs(a[j] - a[i]);  
                p.first = i+1;
                p.second = j+1;
            }
        }
    }
    
    cout << p.first << " " << p.second << endl;
    return 0;
}
