class Solution {
public:
    int maxSubArray(vector<int>& nums) {
  int ans = nums[0];
  int curr_sum  = 0;      
     
  for(int i = 0; i< nums.size( ); ++i){
      curr_sum = curr_sum + nums[i];
      ans = max(ans,curr_sum);
  if(curr_sum < 0){curr_sum = 0;}
  }      
   return ans;
    }
};