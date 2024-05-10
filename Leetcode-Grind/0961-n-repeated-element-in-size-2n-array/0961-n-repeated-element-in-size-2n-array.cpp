class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
  int n = nums.size( );
  n /= 2;      
  unordered_map<int,int>mp;
  for(auto x: nums){mp[x]++;}
  for(auto x: nums){if(mp[x] == n){return x;}}      
  return n;  
    }
};