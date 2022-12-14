class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        auto first = lower_bound(nums.begin(),nums.end(),target);
        auto last = upper_bound(nums.begin(),nums.end(),target);
        
        if(first == nums.end() || *first != target){
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
       else{  
        int Occurrence1 = first - nums.begin();
        int Occurrence2 = last - nums.begin()-1; 
         ans.push_back(Occurrence1);
         ans.push_back(Occurrence2);
        return ans;
     } 
    }
};