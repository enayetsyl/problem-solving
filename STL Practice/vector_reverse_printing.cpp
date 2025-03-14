#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n;i++){
      int x;
      cin >> x;
      v.push_back(x);
    }


for(auto it = v.rbegin(); it != v.rend(); it++){
  cout << *it << endl;
}
 
    return 0;
}


// int main() {
//     int n;
//     vector<int> v;
//     cin >> n;
//     for(int i=0; i<n;i++){
//       int x;
//       cin >> x;
//       v.push_back(x);
//     }

// reverse(v.begin(), v.end());

// for(int num:v){
//   cout << num << endl;
// }
 
//     return 0;
// }
// int main() {
//     int n;
//     vector<int> v;
//     cin >> n;
//     for(int i=0; i<n;i++){
//       int x;
//       cin >> x;
//       v.push_back(x);
//     }

//     sort(v.begin(), v.end(), greater<int>());

//   for(int i=0; i<n;i++){
//      cout<<v[i]<<endl;
//     }
//     return 0;
// }
// int main() {
//     int n;
//     vector<int> v;
//     cin >> n;
//     for(int i=0; i<n;i++){
//       int x;
//       cin >> x;
//       v.push_back(x);
//     }

//     for(int i=n-1; i>=0;i--){
//       cout <<v[i] <<endl;
//     }

//     return 0;
// }

