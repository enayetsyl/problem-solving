#include <bits/stdc++.h>

using namespace std;

int main () {
  int n;
  cin >> n;

  vector<int> v(n);
  unordered_set<int> hash;

  int result = 0;

  for(int i=0; i<n; i++){
    cin >> v[i];
    hash.insert(v[i]);
  }

  for(int i=0; i<n; i++){
    if(hash.count(v[i]+1)){
      result++;
    }
  }

  cout << result;

  return 0;
}