class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>>Tsubsets;
        int n =  nums.size( );
        int subset_count = (1<<n);
        for(int bitmask = 0; bitmask < subset_count; ++bitmask){
            vector<int> subset;
            for(int i = 0; i<n; ++i){
                if((bitmask&(1<<i)) != 0) {
                   subset.push_back(nums[i]); }
            }
          Tsubsets.push_back(subset);  
        }
   return Tsubsets;     
    }
};