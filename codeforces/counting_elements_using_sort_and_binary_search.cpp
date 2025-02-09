#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  cin >> n;

  vector<int> v(n);
  

  int result = 0;

  for(int i=0; i<n; i++){
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for(int i=0; i<n; i++){
    if(binary_search(v.begin(), v.end(), v[i]+1)){
      result++;
    }
  }

  cout << result;

  return 0;
}