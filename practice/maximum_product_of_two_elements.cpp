#include<bits/stdc++.h>

using namespace std;

// basic solution time complexity o(n log n);
// int main(){
//   int n;
//   cin >> n;

//   vector<int> v;

//   for(int i=0; i<n; i++){
//     int x;
//     cin>> x;
//     v.push_back(x);
//   }
//   sort(v.begin(),v.end(), greater<int>());
//   cout << v[0]*v[1];

//   return 0;
// }

// Optimize solution time complexity O(n)

int main(){
  int n;
  cin >> n;
  int max = 0;
  int second_max =0;
  for(int i=0; i<n; i++){
    int x;
    cin >> x;
    if(x>max){
      second_max =max;
      max =x;
    }else if(x > second_max){
      second_max =x;
    }
    
  }
  cout << max*second_max;
  return 0;
}