#include <bits/stdc++.h>

using namespace std;

// Using vector and set
// int main()
// {
//   int n, k;

//   cin >> n >> k;

//   set<int> s;
//   // vector <int> v;
//   for (int i = 0; i < n; i++)
//   {
//     int x;
//     cin >> x;
//     s.insert(x);
//   }

//   // for(auto i : s){
//   //   // cout << i<< endl;
//   //   v.push_back(i);
//   // }

//   if(k > s.size()){
//     cout << "-1" <<endl;
//     return 0;
//   }

//   // sort(v.begin(), v.end(), greater<int>());
//   auto it = s.rbegin();
//   advance(it, k-1);
//   cout << *it<<endl;


//   // cout << v[k-1] << endl;

//   return 0;
// }

// using vector only

 int main (){
  int n, k;

  cin >> n >> k;

  vector<int> v;

  for(int i =0; i<n; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }

  if(k>v.size()){
    cout << "-1"<<endl;
    return 0;
  }

  sort(v.begin(), v.end(), greater<int>());

  v.erase(unique(v.begin(),v.end()),v.end());

  cout << v[k-1] << endl;




  return 0;
 }