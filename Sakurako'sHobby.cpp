#include<bits/stdc++.h>

using namespace std;

int main() {
    time_t start, end; 
    time(&start); 
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            p[i]--;
        }
        
        string s;
        cin >> s;
        
        vector<int> dp(n, -1);
        vector<bool> visited(n, false);
        
        for (int i = 0; i < n; ++i) {
            if (dp[i] == -1) {
                vector<int> cycle;
                int current = i;
                
                while (!visited[current]) {
                    visited[current] = true;
                    cycle.push_back(current);
                    current = p[current];
                }
                
                int blackCount = 0;
                for (int j : cycle) {
                    if (s[j] == '0') {
                        blackCount++;
                    }
                }
                
                for (int j : cycle) {
                    dp[j] = blackCount;
                }
            }
        }
        
        for (int i = 0; i < n; ++i) {
            cout << dp[i] << " ";
        }
        cout << endl;
    }

    // time(&end); 
    // double time_taken = double(end - start); 
    // cout << "Time taken by program is : " << fixed << setprecision(5) << time_taken << " sec " << endl;
    // cout << " sec " << endl; 
    
    return 0;
}
