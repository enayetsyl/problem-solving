#include<bits/stdc++.h>

using namespace std;

// using vector push_back
// int main(){
//   int n, k;
//   cin >> n >> k;

//   vector<int> v;
//   vector<int> v2;

//   for(int i=0; i<n; i++){
//     int x;
//     cin >> x;

//     v.push_back(x);
//   }

//   if(k>v.size()){
//     cout << "Invalid Input" << endl;
//     return 0;
//   }

//   for(int i=v.size()-k; i<v.size();i++ ){
//     v2.push_back(v[i]);
//     cout << v[i] << " "; 
//   }

//   for(int i =0; i<v.size() - k; i++){
//     cout << v[i] << " ";
//     v2.push_back(v[i]);
//   }

//   return 0;
// }

// Using reverse vector

int main (){
  int n, k;
  cin >> n >> k;
vector<int> v;

for (int i=0; i<n; i++){
  int x; 
  cin >> x;
  v.push_back(x);
}

k = k% n;

reverse(v.begin(), v.end());



reverse(v.begin(),v.begin()+k);


reverse(v.begin()+k,v.end());
for(int i = 0; i<n; i++){
  cout << v[i] << " ";
}
cout << endl;

  return 0;
}