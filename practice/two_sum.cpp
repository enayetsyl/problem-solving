#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<int> nums = {3, 2, 4};
  int target = 6;

  unordered_map<int, int> mp;

  for(int i =0; i<nums.size(); i++){
    int complement = target - nums[i];

    if(mp.find(complement) != mp.end()){
      cout << mp[complement] <<"," << i;
      return 0;
    }

    mp[nums[i]] = i;
  }



  return 0; 
}