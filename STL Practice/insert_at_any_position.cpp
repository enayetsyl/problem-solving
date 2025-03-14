#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, idx, new_val;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n;i++){
      
      cin>>v[i];
    }
    
    cin >> idx >> new_val;
   
    

    if(idx <0|| idx>= v.size()){
      cout << "Invalid Index" << endl;
      return 0;
    }
   v.push_back(0);
   for(int i = v.size() -1; i> idx; i--){
    v[i] = v[i-1];
   }
   v[idx] = new_val;
   for(auto num: v){
    cout << num << endl;
   }
    return 0;
}
// int main() {
//     int n, idx, new_val;
//     cin>>n;
//     vector<int> v;
//     for(int i=0; i<n;i++){
      
//       cin>>v[i];
//     }
//     cin >> idx >> new_val;
//     if(idx <0|| idx> v.size()){
//       cout << "Invalid Index" << endl;
//       return 0;
//     }
//     v.insert(v.begin()+idx, new_val);
//     for(auto num: v){
//       cout << num << end;
//     }
//     return 0;
// }