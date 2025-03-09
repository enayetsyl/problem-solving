#include<bits/stdc++.h>

using namespace std;


int main() {
  vector<int> nums = {3,2,2,3};
  int val = 3;
  int i =0;
  for(int j=0; j<nums.size();j++){
    if(nums[j] != val){
      nums[i] = nums[j];
      i++;
    }
  }

  cout << i;

  return 0;
}