#include <bits/stdc++.h>

using namespace std;

// brute force time complexity O(n^2)
// int main(){
// int n;
// cin >>n;
// vector<int> v;

// for(int i=0; i<n; i++){
//   int x;
//   cin >> x;
//   v.push_back(x);
// }

// sort(v.begin(), v.end(), greater<int>());
// for(int i =n-1; i >=0 ; i--){
//   if(v[i]%2 == 0){
//     v.erase(v.begin()+i);
   
//   }
// }

// for(auto it: v){
//   cout << it << " ";
// }

//   return 0;
// }


// Optimized time complexity O(nlogn)

int main(){
  int n; 
  cin >> n;
  vector<int> v;

  for(int i=0; i<n; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end(), greater<int>());

  v.erase(remove_if(v.begin(), v.end(), [](int x) {return x%2 == 0;}),v.end());

  for(auto it: v){
    cout << it << " ";
  }

  return 0;
}