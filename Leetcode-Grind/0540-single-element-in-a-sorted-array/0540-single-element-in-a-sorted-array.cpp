class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int ans = 0;
        for(auto x: nums){
            ans = x^ans;
        }
      return ans;  
    }
};