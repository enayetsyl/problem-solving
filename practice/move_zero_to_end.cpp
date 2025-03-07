#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;

  cin >> n;

  vector<int> v(n);

  for(int i=0;i<n;i++){
    cin >> v[i];
  }

  stable_partition(v.begin(), v.end(),[](int x) {return x != 0;});

  for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  };
  return 0;
}