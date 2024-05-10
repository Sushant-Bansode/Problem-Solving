class Solution {

// Time Complexity : O(2^target + K), K is the maximum size of a combination

private:
    vector<vector<int>> res;
    vector<int> temp;
    
    void helper(int idx, int target, vector<int> &nums){
        if(idx >= nums.size()){
            if(target == 0){
                res.push_back(temp);
            }
            return;
        }
        // Optimisation
        if(target == 0){
            res.push_back(temp);
            return;
        }
        // Include
        if(nums[idx] <= target){
            temp.push_back(nums[idx]);
            helper(idx, target-nums[idx], nums);
            temp.pop_back();
        }
        // Exclude
        helper(idx+1, target, nums);
    }
    
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        helper(0, target, candidates);
        return res;
    }
};