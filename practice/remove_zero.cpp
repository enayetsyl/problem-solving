#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> v;
  int x;
  while(cin >> x){
    v.push_back(x);
  }

  int i =0;
  for(int j = 0; j<v.size();j++){
    if(v[j] != 0){
      v[i]=v[j];
      i++;
    }
  }

  while(i<v.size()){
    v[i] =0;
    i++;
  }

  for(int i=0; i<v.size(); i++){
    cout << v[i] << endl;
  };
  return 0;
}