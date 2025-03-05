#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, k;

  cin >> n >> k;

  set<int> s;
  // vector <int> v;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    s.insert(x);
  }

  // for(auto i : s){
  //   // cout << i<< endl;
  //   v.push_back(i);
  // }

  if(k > s.size()){
    cout << "-1" <<endl;
    return 0;
  }

  // sort(v.begin(), v.end(), greater<int>());
  auto it = s.rbegin();
  advance(it, k-1);
  cout << *it<<endl;


  // cout << v[k-1] << endl;

  return 0;
}