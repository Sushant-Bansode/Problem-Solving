class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max_element = nums[0], min_element = nums[0];
        for (int i = 0; i<nums.size( ); ++i){ 
        max_element = max(max_element, nums[i]); 
        min_element = min(min_element, nums[i]);
        }
        
        return max(0,(max_element - min_element - 2*k)); 
    }
};