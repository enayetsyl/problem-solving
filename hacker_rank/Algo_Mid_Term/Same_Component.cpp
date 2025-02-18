#include<bits/stdc++.h>

using namespace std;
int N, M;
char matrix[1005][1005];
bool visited[1005][1005];
vector<pair<int,int>> d = {{0,1},{0,-1},{1,0},{-1,0}};
bool flag = false;

void dfs(int si, int sj, int di, int dj){
  visited[si][sj] = true;
  for(int i=0; i<4; i++){
    int ci, cj;
    ci = si + d[i].first;
    cj = sj + d[i].second;
    if(ci == di && cj == dj && matrix[ci][cj] == matrix[si][sj]){
      flag = true;
      return;
    }

    if(ci >= 0 && ci < N && cj >= 0 && cj < M && !visited[ci][cj] && matrix[ci][cj] == matrix[si][sj]){
      dfs(ci, cj, di, dj);
    }

    
    // If ci and cj is equal to di,dj and value of matrix[ci][cj] is equal to matrix[si][sj] then print YES and return
    // if no then check if ci and cj is not visited, ci and cj is valid and matrix[ci][cj] is equal to matrix[si][sj] then call dfs(ci,cj)
    // if not then print NO and return
  }
}

int main () {

  cin >> N >> M;

  for (int i=0; i<N; i++){
    for(int j=0; j<M; j++){
      cin >> matrix[i][j];
    }
  }
 
  int si, sj, di, dj;
  cin >> si >> sj >> di >> dj;
  memset(visited, false, sizeof(visited));

  dfs(si, sj, di, dj);

  if(flag){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }

  return 0;

}