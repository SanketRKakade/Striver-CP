//   LEETCODE SPIRAl MATRIC IMPLEMENTED 

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        vector<int> directions = {0, 1, 0, -1, 0}; // right, down, left, up (x, y) directions
        int x = rStart, y = cStart;
        ans.push_back({x, y});
        int total = rows * cols;
        
        int steps = 1;
        while (ans.size() < total) {
            for (int i = 0; i < 4; ++i) { // 4 directions: right, down, left, up
                for (int j = 0; j < (i % 2 == 0 ? steps : steps - 1); ++j) {
                    x += directions[i];
                    y += directions[i + 1];
                    if (x >= 0 && x < rows && y >= 0 && y < cols) {
                        ans.push_back({x, y});
                        if (ans.size() == total) return ans;
                    }
                }
                if (i % 2 == 1) steps++;
            }
        }
        
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>> v = s.spiralMatrixIII(5, 6, 1, 4);

    for (auto &row : v) {
        for (auto &val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
