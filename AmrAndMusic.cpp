#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int> > instruments(n);
    
    for (int i = 0; i < n; i++) {
        cin >> instruments[i].first;
        instruments[i].second = i + 1;
    }

    sort(instruments.begin(), instruments.end());

    int total_days = 0;
    vector<int> learned_instruments;

    for (int i = 0; i < n; i++) {
        if (total_days + instruments[i].first <= k) {
            total_days += instruments[i].first;
            learned_instruments.push_back(instruments[i].second);
        } else {
            break;
        }
    }

    cout << learned_instruments.size() << endl;
    for (int i : learned_instruments) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
