#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    unordered_map<int, vector<int> > indexMap;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        indexMap[a[i]].push_back(i);
    }

    vector<pair<int, int> > results;

    for (const auto& entry : indexMap) {
        int x = entry.first;
        const vector<int>& indices = entry.second;

        if (indices.size() == 1) {
            results.push_back({x, 0});
        } else {
            int commonDifference = indices[1] - indices[0];
            bool isAP = true;

            for (size_t j = 1; j < indices.size() - 1; j++) {
                if (indices[j + 1] - indices[j] != commonDifference) {
                    isAP = false;
                    break;
                }
            }

            if (isAP) {
                results.push_back({x, commonDifference});
            }
        }
    }

    sort(results.begin(), results.end());

    cout << results.size() << endl;
    for (const auto& result : results) {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
