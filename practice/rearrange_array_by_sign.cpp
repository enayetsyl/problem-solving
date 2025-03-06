#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> v;
  vector<int> p;
  vector<int> ne;

  for(int i=0; i<n; i++){
    int x;
    cin >> x;
    if(x>0){
      p.push_back(x);
    }else if(x<0){
      ne.push_back(x);
    }
  }

  for (int i=0; i<p.size(); i++){
    v.push_back(p[i]);
    v.push_back(ne[i]);
  }
  for (int i=0; i<v.size(); i++){
    cout << v[i] << " ";
  }

  return 0;
}