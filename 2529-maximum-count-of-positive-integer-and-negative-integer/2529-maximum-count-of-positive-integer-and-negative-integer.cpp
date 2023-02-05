class Solution {
public:
    int maximumCount(vector<int>& nums) {
  int neg, pos, n = nums.size( ); 
neg = upper_bound(nums.begin(), nums.end(), -1) - nums.begin( );
        
pos = lower_bound(nums.begin(), nums.end(), 1) - nums.begin( );
 
return max(neg,n - pos);        
    }
};