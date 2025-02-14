#include <bits/stdc++.h>

using namespace std;

const int max_n = 1000;
char house[max_n][max_n];
bool visited[max_n][max_n];
int N, M;

vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};

bool bfs(int sx, int sy, int ex, int ey)
{
    queue<pair<int,int>> q;
    q.push({sx,sy});
    visited[sx][sy] = true;
    
    while(!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        if(par_i == ex && par_j == ey)
        {
            return true;
        }

        for(int i=0;i<4;i++)
        {
            int cx = par_i + d[i].first;
            int cy = par_j + d[i].second;

            if(cx >= 0 && cx < N && cy >=0 && cy < M && !visited[cx][cy] && (house[cx][cy] == '.' || house[cx][cy] == 'B'))
            {
              visited[cx][cy] = true;
              q.push({cx,cy});
            }
        }
    }
    return false;
}


int main()
{
    cin >>  N >> M;

    int sx=-1, sy=-1, ex=-1, ey=-1;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < M; j++) {
          visited[i][j] = false;
      }
  }

    for(int i =0; i < N; i++){
      for (int j =0; j < M; j++){
        cin >> house[i][j];
        if(house[i][j] == 'A'){
          sx = i;
          sy = j;
        }
        if(house[i][j] == 'B'){
          ex = i; 
          ey = j;
        }
      }
    }
    if (sx == ex && sy == ey) {
      cout << "YES" << endl;
      return 0;
  }

    if(bfs(sx, sy, ex, ey)){
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    return 0;
}
