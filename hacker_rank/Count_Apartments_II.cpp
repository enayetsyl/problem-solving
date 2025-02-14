#include <bits/stdc++.h>

using namespace std;

const int max_n = 1000;
char building[max_n][max_n];
bool visited[max_n][max_n];
int H, W;

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int dfs(int x, int y){
  visited[x][y] = 1;
  int room_count = 1;
  for (int i = 0; i < 4; i++) {
    int cx = x + d[i].first;
    int cy = y + d[i].second;
    if (cx >= 0 && cx < H && cy >= 0 && cy < W && !visited[cx][cy] && building[cx][cy] == '.') {
      room_count += dfs(cx, cy);
    }
  }
  return room_count;
}

int main()
{
    cin >> H >> W;

    for (int i =0; i < H; i++){
      for (int j=0; j<W; j++){
        cin >> building[i][j];
        visited[i][j] = false;
      }
    }

    vector <int> apartments;

    for (int i =0; i<H; i++){
      for (int j=0; j<W; j++){
        if(!visited[i][j] && building[i][j] == '.'){
          int room_count = dfs(i,j);
          apartments.push_back(room_count);
        }
      }
    }

    if(apartments.empty()){
      cout << "-1" << endl;
    } else {
      sort(apartments.begin(), apartments.end());
      for(int apartment : apartments){
        cout << apartment << " ";
      }
      cout << endl;
    }
    return 0;
}
