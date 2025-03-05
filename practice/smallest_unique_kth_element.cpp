#include<bits/stdc++.h>

using namespace std;

int main (){
  int n, k;
  cin >> n >> k;

  set<int> s;

  for(int i=0; i<n; i++){
    int x;
    cin >> x;
    s.insert(x);
  }

  if(k>s.size()){
    cout << "-1" << endl;
    return 0;
  }



  auto it = s.begin();

  advance(it, k-1);
  cout << *it << endl;


  return 0;
}