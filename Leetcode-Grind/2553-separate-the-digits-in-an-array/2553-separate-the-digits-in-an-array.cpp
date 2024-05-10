class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
     vector<int> ans;   
    for(auto x: nums){
          string s = to_string(x);
         for(auto k : s){
          ans.push_back(k- '0');   
         }   
      }
  return ans;      
    }
};