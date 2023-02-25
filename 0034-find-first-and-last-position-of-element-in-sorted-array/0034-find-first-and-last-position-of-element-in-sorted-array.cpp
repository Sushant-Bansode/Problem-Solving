class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lower = lower_bound(nums.begin( ), nums.end( ), target);
        auto upper = upper_bound(nums.begin( ), nums.end( ), target);
        vector<int> ans;
     if(lower != nums.end( ) && *lower == target){
         ans.push_back(lower - nums.begin( ));
         if(upper == nums.end( )){
          ans.push_back(nums.size( )-1);   
         }else{
          ans.push_back(upper - nums.begin( )-1);   
         }
     }else{
        ans.push_back(-1);
        ans.push_back(-1); 
     }
   return ans;     
    }
};