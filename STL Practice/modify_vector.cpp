#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
      cin>>n;
      vector<int> original;
      for(int i=0; i<n; i++){
        int x;
        cin >> x;
        cout << x << endl;
        original.push_back(x);
      }

      reverse(original.begin(), original.end());

      for(auto num: original){
        cout << num << endl;
      }

  return 0;
}

// int main() {
//     int n;
//     cin>>n;
//     vector<int> main;
//     vector<int> rev;
//     for(int i=0; i<n; i++){
//       int x;
//       cin >> x;
//       cout << x << endl;
//       main.push_back(x);
//       rev.push_back(x);
//     }
//     reverse(rev.begin(), rev.end());

//     for(int num:rev){
//       cout <<num << endl;
//     }

//     return 0;
// }