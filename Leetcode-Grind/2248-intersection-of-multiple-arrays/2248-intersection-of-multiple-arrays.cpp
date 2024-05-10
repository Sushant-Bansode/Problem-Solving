class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        map<int,int> mp; 
        vector<int> ans;
        
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<nums[row].size();col++)
            {
                mp[nums[row][col]]++;
            }
        }
        
        for(auto x : mp){
            if(x.second == n)
                ans.push_back(x.first);
        }
        return ans;
    }
};