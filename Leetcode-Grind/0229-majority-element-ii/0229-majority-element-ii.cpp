class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
   map<int,int> mp;
    int t = nums.size( )/3;
    vector<int> ans;
    for(int i=0;i<nums.size();i++)
    {
       mp[nums[i]]++; 
    }
    for(auto it : mp)
    {
        if(it.second>t)
            ans.push_back(it.first);                
    }
    return ans;      
    }
};