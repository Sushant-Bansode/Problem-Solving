class Solution {
public:
    int subarraySum(vector<int>& nums, int sum) {  
 int n = nums.size();
unordered_map<int, int> mp;
   int count = 0;
   int presum = 0;
  
 for(int i = 0; i < n; i++){
        presum += nums[i];
        if (presum == sum)
            count++;
     
        if (mp.find(presum - sum) != mp.end())
            count += (mp[presum - sum]);
    
  mp[presum]++;
 }
        
 return count; 
    }
};