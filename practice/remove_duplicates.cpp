#include<bits/stdc++.h>

using namespace std;

int main () {
  vector <int> v;
  int x;
  while (cin >> x){
    
    v.push_back(x);
  }
  sort(v.begin(), v.end());

  v.erase(unique(v.begin(), v.end()),v.end());

  for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }


  return 0;
}