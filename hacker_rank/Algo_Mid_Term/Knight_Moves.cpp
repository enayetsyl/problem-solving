#include <bits/stdc++.h>
using namespace std;



vector<pair<int, int>> d = {{2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}, {2, 1}, {1, 2}, {-1, 2}};

bool valid(int i, int j, int N, int M)
{
    if (i < 0 || i >= N || j < 0 || j >= M)
        return false;
    return true;
}

int bfs(int N, int M, int Ki, int Kj, int Qi, int Qj )
{
  vector<vector<bool>> visited(N, vector<bool>(M, false));
    vector<vector<int>> level(N, vector<int>(M, -1));
    if(Ki == Qi && Kj == Qj)
      return 0;

    queue<pair<int, int>> q;
    q.push({Ki, Kj});
    visited[Ki][Kj] = true;
    level[Ki][Kj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (int i = 0; i < 8; i++)
        {
            int ci = par_i + d[i].first;
            int cj = par_j + d[i].second;
            if (valid(ci, cj, N, M) && !visited[ci][cj])
            {
                q.push({ci, cj});
                visited[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;

                if (ci == Qi && cj == Qj)
                return level[ci][cj];
            }
        }
    }
    return -1; 
}

int main()
{
    int T;
    cin >> T;
    

    while (T--)
    {
  
      int N, M;
    cin >> N >> M;

        int Ki, Kj, Qi, Qj;
        cin >> Ki >> Kj >> Qi >> Qj;

       
        cout << bfs(N, M, Ki, Kj, Qi, Qj) << endl;
    }

    return 0;
}