#include<bits/stdc++.h>

using namespace std;


int main(){
  vector<int> nums = {4,5,1,2,4,5,2};

  unordered_map<int, int> freq;

  queue<int> q;

  for(int i=0; i<nums.size(); i++){
    freq[i]++;
    if(freq[i] ==1){
      q.push(freq[i]);
    }
    
    while(!q.empty() && freq[q.front()] >1){
      q.pop();
    }

    if(!q.empty()){
      cout << q.front() << " ";
    } else {
      cout << "-1";
    }
  }
  
  
  
  
  
  
  
  
  
  
  
  
  vector<int> nums = {4, 5, 1, 2, 4, 5, 2};
  unordered_map<int, int> freq;

  queue<int> q;

  for(int i=0; i<nums.size(); i++){
    freq[nums[i]]++;

    if(freq[nums[i] ] ==1){
      // cout<<nums[i];
      q.push(nums[i]);
    }

    while(!q.empty() && freq[q.front()]>1){
      q.pop();
    }

    if(!q.empty()){
      cout << q.front() << " ";
    } else {
      cout << "-1";
    }
  }



  return 0;
}