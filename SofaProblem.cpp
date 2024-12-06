#include <iostream>
#include <vector>
#include <queue>
#include <set>

using namespace std;

struct SofaState {
    int x1, y1, x2, y2, steps;
};

int n, m; // Grid dimensions
vector<vector<char>> grid;
set<pair<pair<int, int>, pair<int, int>>> visited;

bool isInsideGrid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool isValidMove(int x1, int y1, int x2, int y2) {
    return isInsideGrid(x1, y1) && isInsideGrid(x2, y2) && grid[x1][y1] != 'H' && grid[x2][y2] != 'H';
}

bool canRotate(int x1, int y1, int x2, int y2) {
    if (x1 == x2) { // Horizontal sofa
        if (isInsideGrid(x1 - 1, y1) && isInsideGrid(x2 - 1, y2) &&
            isInsideGrid(x1 + 1, y1) && isInsideGrid(x2 + 1, y2)) {
            return grid[x1 - 1][y1] != 'H' && grid[x2 - 1][y2] != 'H' &&
                   grid[x1 + 1][y1] != 'H' && grid[x2 + 1][y2] != 'H';
        }
    } else { // Vertical sofa
        if (isInsideGrid(x1, y1 - 1) && isInsideGrid(x2, y2 - 1) &&
            isInsideGrid(x1, y1 + 1) && isInsideGrid(x2, y2 + 1)) {
            return grid[x1][y1 - 1] != 'H' && grid[x2][y2 - 1] != 'H' &&
                   grid[x1][y1 + 1] != 'H' && grid[x2][y2 + 1] != 'H';
        }
    }
    return false;
}

int bfs(int sx1, int sy1, int sx2, int sy2, int tx, int ty) {
    queue<SofaState> q;
    q.push({sx1, sy1, sx2, sy2, 0});
    visited.insert({{sx1, sy1}, {sx2, sy2}});

    while (!q.empty()) {
        SofaState curr = q.front();
        q.pop();

        // Check if we've reached the target
        if ((curr.x1 == tx && curr.y1 == ty) || (curr.x2 == tx && curr.y2 == ty)) {
            return curr.steps;
        }

        // Move in all four directions
        int dx[] = {0, 0, 1, -1};
        int dy[] = {1, -1, 0, 0};

        for (int i = 0; i < 4; i++) {
            int nx1 = curr.x1 + dx[i];
            int ny1 = curr.y1 + dy[i];
            int nx2 = curr.x2 + dx[i];
            int ny2 = curr.y2 + dy[i];

            if (isValidMove(nx1, ny1, nx2, ny2) && visited.find({{nx1, ny1}, {nx2, ny2}}) == visited.end()) {
                q.push({nx1, ny1, nx2, ny2, curr.steps + 1});
                visited.insert({{nx1, ny1}, {nx2, ny2}});
            }
        }

        // Try rotating the sofa
        if (canRotate(curr.x1, curr.y1, curr.x2, curr.y2)) {
            int nx1, ny1, nx2, ny2;
            if (curr.x1 == curr.x2) { // Horizontal -> Vertical
                nx1 = min(curr.x1, curr.x2);
                ny1 = curr.y1;
                nx2 = nx1 + 1;
                ny2 = ny1;
            } else { // Vertical -> Horizontal
                nx1 = curr.x1;
                ny1 = min(curr.y1, curr.y2);
                nx2 = nx1;
                ny2 = ny1 + 1;
            }

            if (visited.find({{nx1, ny1}, {nx2, ny2}}) == visited.end()) {
                q.push({nx1, ny1, nx2, ny2, curr.steps + 1});
                visited.insert({{nx1, ny1}, {nx2, ny2}});
            }
        }
    }

    return -1; // Target is unreachable
}

int main() {
    // cout << "Enter grid dimensions (n m): ";
    cin >> n >> m;
    grid.resize(n, vector<char>(m));

    int sx1, sy1, sx2, sy2, tx, ty;
    // cout << "Enter grid:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 's') {
                sx1 = i; sy1 = j;
                sx2 = i; sy2 = j + 1; // Assuming initial position is horizontal
            } else if (grid[i][j] == 'S') {
                tx = i; ty = j;
            }
        }
    }

    int result = bfs(sx1, sy1, sx2, sy2, tx, ty);
    if (result == -1) {
        cout << "Impossible" << endl;
    } else {
        cout << "Minimum steps: " << result << endl;
    }

    return 0;
}
