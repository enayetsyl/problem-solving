// You are given an integer array arr of size N. Implement a function using std::vector in C++ that:

// Reads N integers into a vector<int>.
// Sorts the vector in non-decreasing order.
// Removes duplicate elements.
// Prints the unique sorted elements.

#include<bits/stdc++.h>
using namespace std;

// Approach 1 using set
// int main () {
//   set <int> v;
//   int N;
//   cin>>N;

//   for(int i=0; i<N; i++){
//     int x;
//     cin >> x;
//     v.insert(x);
//   }

//   for(auto it: v){
//     cout << it << " ";
//   }
//   cout << endl;


//   return 0;
// }

//  Approach 2 using vector
int main () {
  vector <int> v;
  int N;
  cin>>N;

  for(int i=0; i<N; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end());
  auto unique_array = unique(v.begin(), v.end());
  v.erase(unique_array, v.end());
  for (auto it: v){
    cout << it << " ";
  }
  cout << endl;


  return 0;
}

