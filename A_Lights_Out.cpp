#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    vector<vector<int> > presses(3, vector<int>(3));
    vector<vector<int> > grid(3, vector<int>(3, 1));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> presses[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int totalPresses = presses[i][j];
            if (i > 0) totalPresses += presses[i - 1][j];
            if (i < 2) totalPresses += presses[i + 1][j];
            if (j > 0) totalPresses += presses[i][j - 1];
            if (j < 2) totalPresses += presses[i][j + 1];
            if (totalPresses % 2 == 1) grid[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
