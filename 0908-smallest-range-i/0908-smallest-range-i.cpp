class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max_element = nums[0], min_element = nums[0];
        for (auto &x : nums){ 
        max_element = max(max_element, x); 
        min_element = min(min_element, x);
        }
        
        return max(0,(max_element - min_element - 2*k)); 
    }
};