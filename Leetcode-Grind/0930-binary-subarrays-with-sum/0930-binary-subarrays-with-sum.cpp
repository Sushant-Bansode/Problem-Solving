class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int k) {
          int n = nums.size( );
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for(int i = 1; i<n ;++i){
            prefix[i] = nums[i] + prefix[i-1];
        }
        // Need to Find No. of mp[prefix[j] - sum] which is nothing but no. of i-1's.
        long long ans  = 0;
        map<int,int> mp;
        mp[0]++;
        for(int j = 0; j < n; ++j){
            if(mp.find(prefix[j] - k) != mp.end( )){
               ans += mp[prefix[j] - k];
            }
            mp[prefix[j]]++;
        }
        
    return ans;    
    }
};