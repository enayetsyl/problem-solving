#include <bits/stdc++.h>

using namespace std;


int main(){
vector <int> nums = {4, 5, 1, 2, 1, 2, 4} ;
unordered_map<int, int> mp;

for(int i=0; i<nums.size(); i++){
  mp[nums[i]]++;
}

for(int i=0; i<nums.size(); i++){
  if(mp[nums[i]] ==1){
    cout<<nums[i];
    return 0;
  }
}

cout << "-1";



  return 0;
}