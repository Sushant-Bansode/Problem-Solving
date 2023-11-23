class Solution {
public:
    bool isArithmetic(vector<int>& subarray) {
        sort(subarray.begin(), subarray.end());
        int diff = subarray[1] - subarray[0];
        int subarray_size=subarray.size();
        for (int i = 2; i < subarray_size; ++i) {
            if (subarray[i] - subarray[i - 1] != diff) {
                return false;
            }
        }
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        int n = nums.size();
        int m = l.size();
        
        for (int i = 0; i < m; ++i) {
            vector<int> subarray(nums.begin() + l[i], nums.begin() + r[i] + 1);
            ans.push_back(isArithmetic(subarray));
        }
        
        return ans;
    }
};