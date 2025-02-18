#include <bits/stdc++.h>
using namespace std;

// Directions: Right, Left, Up, Down (as per problem requirement)
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

// Function to find and mark the escape path
void findEscapePath(vector<string>& maze, int n, int m, int startX, int startY) {
    queue<pair<int, int>> q;
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1})); 

    q.push({startX, startY});
    visited[startX][startY] = true;
    pair<int, int> end = {-1, -1}; 

    while (!q.empty()) {
        char x = q.front().first;
        char y = q.front().second;
        q.pop();

        // Stop BFS if we reach 'D'
        if (maze[x][y] == 'D') {
            end = {x, y};
            break;
        }

        // Explore all four directions in given order
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && (maze[nx][ny] == '.' || maze[nx][ny] == 'D')) {
                visited[nx][ny] = true;
                q.push({nx, ny});
                parent[nx][ny] = {x, y}; // Store previous cell for path tracing
            }
        }
    }

    // If no path to 'D' is found, return without changes
    if (end.first == -1) return;

    // Backtrack from 'D' to 'R' to mark the correct path
    pair<int, int> cur = end;
    while (cur != make_pair(startX, startY)) {
        pair<int, int> prev = parent[cur.first][cur.second];
        if (maze[prev.first][prev.second] == '.') {
            maze[prev.first][prev.second] = 'X';
        }
        cur = prev;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> maze(n);
    
    int startX = -1, startY = -1;

    // Read maze input and locate 'R'
    for (int i = 0; i < n; i++) {
        cin >> maze[i];
        for (int j = 0; j < m; j++) {
            if (maze[i][j] == 'R') {
                startX = i;
                startY = j;
            }
        }
    }

    // Find and mark escape path
    findEscapePath(maze, n, m, startX, startY);

    // Print modified maze
    for (const string& row : maze) {
        cout << row << endl;
    }

    return 0;
}
