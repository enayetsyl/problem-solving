#include <bits/stdc++.h>
using namespace std;


bool visited[1005][1005];
int N, M;
char matrix[1005][1005];
vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};
int ans;

bool valid(int ci, int cj){
  if(ci >= 0 && ci < N && cj >= 0 && cj < M){
    return true;
  }
  else{
    return false;
  }
};

void dfs(int si, int sj){
  visited[si][sj] = true;
  ans++;
  for(int i=0; i<4; i++){
    int ci, cj;
    ci = si + d[i].first;
    cj = sj + d[i].second;
    if(valid(ci, cj) && !visited[ci][cj] && matrix[ci][cj] == '.'){
      dfs(ci, cj);
    }
  }};



int main () {
  cin >> N >> M;
  memset(visited, false, sizeof(visited));
  int min = INT_MAX;
  for(int i=0; i<N; i++){
    for(int j=0; j<M; j++){
      cin >> matrix[i][j];
    }
  }

  for (int i = 0; i < N; i++){
    for (int j=0; j< M; j++){
      if(!visited[i][j] && matrix[i][j] == '.'){
        ans = 0;
        dfs(i, j);
        if(ans < min){
          min = ans;
        }
      }
    }
  }

 if (min == INT_MAX){
  cout << -1 << endl;
 } else {
  cout << min << endl;
 }

  return 0;
}





// class Solution
// {
// public:
//     bool vis[55][55];
//     int ans;
//     int n, m;
//     vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
//     bool valid(int ci, int cj)
//     {
//         if (ci >= 0 && ci < n && cj >= 0 && cj < m)
//             return true;
//         else
//             return false;
//     }
//     void dfs(int si, int sj, vector<vector<int>> &grid)
//     {
//         vis[si][sj] = true;
//         ans++;
//         for (int i = 0; i < 4; i++)
//         {
//             int ci = si + d[i].first;
//             int cj = sj + d[i].second;
//             if (valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
//             {
//                 dfs(ci, cj, grid);
//             }
//         }
//     }
//     int maxAreaOfIsland(vector<vector<int>> &grid)
//     {
//         memset(vis, false, sizeof(vis));
//         n = grid.size();
//         m = grid[0].size();
//         int mx = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < m; j++)
//             {
//                 if (!vis[i][j] && grid[i][j] == 1)
//                 {
//                     ans = 0;
//                     dfs(i, j, grid);
//                     mx = min(mx, ans);
//                 }
//             }
//         }
//         return mx;
//     }
// };
