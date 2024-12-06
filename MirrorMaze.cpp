#include <iostream>
#include <vector>
#include <unordered_set>
#include <utility>

using namespace std;

int M, N;
vector<vector<char>> grid;

int dx[] = {0, 1, 0, -1}; // Right, Down, Left, Up
int dy[] = {1, 0, -1, 0}; 

// Hash function for pairs
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1,T2> &pair) const {
        auto hash1 = std::hash<T1>{}(pair.first);
        auto hash2 = std::hash<T2>{}(pair.second);
        return hash1 ^ hash2; // Combine hashes
    }
};

bool isValid(int x, int y) {
    return x >= 0 && x < M && y >= 0 && y < N && grid[x][y] != '0';
}

void dfs(int x, int y, int dir, unordered_set<pair<int, int>, pair_hash> &path, int &cellCount) {
    if (path.count({x, y})) {
        // Loop detected; count the cells in the current path
        cellCount = max(cellCount, (int)path.size());
        return;
    }
    
    path.insert({x, y});

    // Move in the current direction
    int nx = x + dx[dir];
    int ny = y + dy[dir];

    if (isValid(nx, ny)) {
        if (grid[nx][ny] == '/') {
            dfs(nx, ny, (dir + 3) % 4, path, cellCount); // Reflect left
        } else if (grid[nx][ny] == '\\') {
            dfs(nx, ny, (dir + 1) % 4, path, cellCount); // Reflect right
        } else {
            dfs(nx, ny, dir, path, cellCount); // Continue in the same direction
        }
    }

    path.erase({x, y}); // Backtrack
}

int main() {
    cin >> M >> N;
    grid.resize(M, vector<char>(N));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    int maxCells = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (grid[i][j] != '0') { // Start only from mirrors
                unordered_set<pair<int, int>, pair_hash> path;
                int cellCount = 0;
                for (int d = 0; d < 4; d++) { // Try all directions
                    dfs(i, j, d, path, cellCount);
                }
                maxCells = max(maxCells, cellCount);
            }
        }
    }

    cout << maxCells << endl;
    return 0;
}