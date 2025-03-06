#include<bits/stdc++.h>

using namespace std;

int main (){
  int n;
  cin >> n;
  vector<int> v;
  vector<int> v2;
  int sum =0;
  for(int i=0; i<n; i++){
    int x;
    cin >> x;
    v.push_back(x);
  }
  for(int i =n-1; i >=0; i--){
    if(v[i] >= sum){
      v2.push_back(v[i]);
    };
    sum += v[i];

  }

  for(int i = v2.size()-1; i>=0; i--){
    cout << v2[i] << " ";
  }




  return 0;
}