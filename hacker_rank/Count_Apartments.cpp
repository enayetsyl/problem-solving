#include <iostream>
#include <vector>

using namespace std;

const int max_n = 1000;
char building[max_n][max_n]; 
bool visited[max_n][max_n]; 
int H, W; 

vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

void dfs(int x, int y){
  visited[x][y] = true;

  for (int i = 0; i < 4; i++) {
    int cx = x + d[i].first;
    int cy = y + d[i].second;
    if (cx >= 0 && cx < H && cy >= 0 && cy < W && !visited[cx][cy] && building[cx][cy] == '.' ) {
      dfs(cx, cy);
      }
    }
}


int main() {
   cin >> H >> W;

   for (int i =0 ; i < H; i++){
    for (int j =0; j<W; j++){
      cin >> building[i][j];
      visited[i][j] = false;
    }
   }

   int apartments = 0;

   for (int i=0; i < H; i++){
    for (int j=0; j<W; j++){
      if(!visited[i][j] && building[i][j] == '.'){
        dfs(i, j);
        apartments++;
      }
    }
   }

   cout << apartments << endl;

    return 0;
}
