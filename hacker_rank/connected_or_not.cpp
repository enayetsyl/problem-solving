#include<bits/stdc++.h>

using namespace std;

int main(){
  int N, E;
  cin >> N >> E;

  int matrix[N][N];
  memset(matrix, 0, sizeof(matrix));


  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(i==j){
        matrix[i][j] = 1;
      }
    }
  }

  for(int i=0; i<E; i++){
    int a, b;
    cin >> a >> b;
    matrix[a][b] = 1;
  }

  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}