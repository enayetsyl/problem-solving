#include<bits/stdc++.h>

using namespace std;

const int max_n = 1000;
bool matrix[max_n][max_n];

int main(){
  int N, E;
  cin >> N >> E;

  for (int i =0 ; i<N; i++){
    for (int j=0; j<N; j++){
      matrix[i][j] = false;
    }
  }


  for(int i=0; i<E; i++){
   int X, Y;
   cin >> X >> Y;
   matrix[X][Y] = true;
  }

  int Q;
  cin >>Q;

  for(int i=0; i<Q; i++){
    int A, B;
    cin >> A >> B;
    if(A== B || matrix[A][B]){
      cout << "YES" << endl;
    } else 
    {
      cout << "NO" << endl;
    }
  }
 

  return 0;
}