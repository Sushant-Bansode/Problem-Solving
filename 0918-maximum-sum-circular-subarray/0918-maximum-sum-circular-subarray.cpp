class Solution {
public:
    
    int NormalMaxSum(vector<int>&nums){
        int res = nums[0], maxEnding = nums[0];
        for(int i = 1; i< nums.size( ); ++i){
            maxEnding = max(nums[i], maxEnding + nums[i]);
            res = max(res, maxEnding);
        }
    return res;      
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
    int max_normal = NormalMaxSum(nums);
        if(max_normal < 0){
            return max_normal;
        }
     int arr_sum  = 0;
        for(int i = 0; i< nums.size( ); ++i){
         arr_sum += nums[i];
         nums[i] = -nums[i];   
        }
   int max_circular = arr_sum + NormalMaxSum(nums);
   return max(max_normal, max_circular);     
    }
};