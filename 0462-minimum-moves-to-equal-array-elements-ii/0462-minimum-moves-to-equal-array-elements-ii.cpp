class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x = nums[nums.size()/2];
        int ans = 0;
        for(auto &k: nums){
            ans += abs(k-x);
        }
        return ans; 
    }
};