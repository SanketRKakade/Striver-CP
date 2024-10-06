#include<iostream>
#include<vector>
using namespace std; 
#define int long long
 
void check_shower_time()
{
    int num_intervals, shower_time, total_minutes;
    cin >> num_intervals >> shower_time >> total_minutes;
 
    vector<pair<int, int>> intervals; 
    for (int i = 1; i <= num_intervals; i++) {
        int start, end;
        cin >> start >> end;
        intervals.push_back({start, end});
    }
 
    sort(intervals.begin(), intervals.end());
 
    int first_task_start = intervals[0].first;
    if (first_task_start >= shower_time) {
        cout << "Yes" << endl;
        return;
    }
 
    int last_task_end = intervals[0].second;
    for (int i = 1; i < num_intervals; i++) {
        
        if (intervals[i].first > last_task_end) {
            if (intervals[i].first - last_task_end >= shower_time) {
                cout << "Yes" << endl;
                return;
            }
        }
        last_task_end = max(last_task_end, intervals[i].second);
    }
 
    if (total_minutes - last_task_end >= shower_time) {
        cout << "Yes" << endl;
        return;
    }
 
    cout << "No" << endl;
}
 
int32_t main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        check_shower_time();
    }
}