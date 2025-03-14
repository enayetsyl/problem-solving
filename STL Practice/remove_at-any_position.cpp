#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, idx;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
      cin >> v[i];
    }

    cin >> idx;
    
    for(int i = idx; i<v.size() -1; i++){
      v[i] = v[i+1];
    }
v.resize(n-1);
        for(int num: v){
      cout << num << " ";
    }
    
    return 0;
}


// int main() {
//     int n, idx;
//     cin >> n;
//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//       cin >> v[i];
//     }

//     cin >> idx;
//     v.erase(v.begin()+idx);
//     for(int num: v){
//       cout << num << " ";
//     }
//     return 0;
// }