class Solution {
public:
vector<int> shuffle(vector<int>& nums, int n) {
    vector<int>ans;
        int i=0;
        int j= n;
        for(i = 0, j = n;j<2*n && i < n;i++,j++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
        }

return ans;
    }
};