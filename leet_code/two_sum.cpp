Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]

Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target){
    vector<int> copy;
    for (int i=0; i<nums.size(); i++){
        for (int j = i+1; j<nums.size(); j++){
            if((nums[i] + nums[j]) == target){
                copy.push_back(i);
                copy.push_back(j);
                return copy;
            }
        }
    };
    return copy;
  };
  
};

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    vector<pair<int, int>> v;

    for (int i = 0; i < nums.size(); i++)
    {
      v.push_back({nums[i], i});
    }

    sort(v.begin(), v.end());

    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
      int sum = v[left].first + v[right].first;
      if (sum == target)
      {
        return {v[left].second, v[right].second};
      }
      else if (sum < target)
      {
        left++;
      }
      else
      {
        right--;
      }
    }
    return {};
  }
};

class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    vector<pair<int, int>> v;

    for (int i = 0; i < nums.size(); i++)
    {
      v.push_back({nums[i], i});
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
      int left = i + 1;
      int right = nums.size() - 1;
      int balance = target - v[i].first;
      while (left <= right)
      {
        int mid = left + (right - left) / 2;

        if (v[mid].first == balance)
        {
          return {v[i].second, v[mid].second};
        }
        else if (v[mid].first > balance)
        {
          right = mid - 1;
        }
        else
        {
          left = mid + 1;
        }
      }
    }
    return {};
  }
};

class Solution {
  public:
  vector<int> twoSum(vector<int> &nums, int target){
    unordered_map<int, int> hashMap;

    for(int i=0; i < nums.size(); i++){
      int difference = target - nums[i];
      if(hashMap.find(difference) != hashMap.end()){
        return {hashMap[difference], i};
      }
      hashMap[nums[i]] = i;
    }
  return {};
  }
};