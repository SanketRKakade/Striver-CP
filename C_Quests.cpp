#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        vector<int> b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        priority_queue<int> pq;
        int totalExp = 0;
        int questsCompleted = 0;
        
        for (int i = 0; i < n; i++) {
            if (questsCompleted < k) {
                totalExp += a[i];
                questsCompleted++;
                pq.push(b[i]);
            }
        }
        
        while (questsCompleted < k && !pq.empty()) {
            totalExp += pq.top();
            pq.pop();
            questsCompleted++;
        }
        
        cout << totalExp << endl;
    }
    
    return 0;
}
