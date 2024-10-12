#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

void solveMathContest(vector<tuple<int, int, int, int>>& testCases) {
    for (const auto& testCase : testCases) {
        int a, b, c, d;
        tie(a, b, c, d) = testCase;

        // Select x = b, y = c, z = c if possible, otherwise z = c + 1
        int x = b;
        int y = c;
        int z = (c + 1 <= d) ? c + 1 : c;  // Ensure z is in the range [c, d] and can form a valid triangle

        // Special case to avoid z = y, ensuring all sides are distinct if needed
        if (x == y && y == z) {
            z = c + 1;
        }

        cout << x << " " << y << " " << z << endl;
    }
}

int main() {
    int t;
    cin >> t;
    vector<tuple<int, int, int, int>> testCases(t);

    for (int i = 0; i < t; ++i) {
        int a, b, c, d;
        cin >> a >> b >> c >>  d;
        testCases[i] = make_tuple(a, b, c, d);
    }

    solveMathContest(testCases);

    return 0;
}
