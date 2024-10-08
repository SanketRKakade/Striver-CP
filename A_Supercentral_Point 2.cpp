#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > points(n);

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        points[i] = make_pair(x, y);
    }

    int supercentral_count = 0;

    for(int i = 0; i < n; i++) {
        bool has_left = false, has_right = false, has_upper = false, has_lower = false;
        
        for(int j = 0; j < n; j++) {
            if(points[j].first > points[i].first && points[j].second == points[i].second) has_right = true;
            if(points[j].first < points[i].first && points[j].second == points[i].second) has_left = true;
            if(points[j].first == points[i].first && points[j].second > points[i].second) has_upper = true;
            if(points[j].first == points[i].first && points[j].second < points[i].second) has_lower = true;
        }
        
        if(has_left && has_right && has_upper && has_lower) {
            supercentral_count++;
        }
    }

    cout << supercentral_count << endl;
    return 0;
}
