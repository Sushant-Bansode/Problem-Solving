class Solution {
public:
    int thirdMax(vector<int>& nums) {
    set<int>s;
    vector<int>ans;

    for(int i=0;i<nums.size();i++)
    s.insert(nums[i]);
    
    for(auto x : s)
    ans.push_back(x);
    
    if(ans.size()==1)
    return ans[0];
        
    if(ans.size()==2)
    return ans[1];
    
    if(ans.size()>=3)
    return ans[ans.size()-3];   
        
    return ans[ans.size()-1];  // Timepass Statement for Ensuring the Function, Returns Some int Value incase if none of If Conditions is Found Matching,       
    }
};