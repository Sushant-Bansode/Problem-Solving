class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
    map<int,int>mp;
  for(auto x: nums)
      mp[x]++;
     // Since Given Strictly Increasing array, That it is Sorted in Increasing Order...    
    // nums[j] = nums[i] + diff;    
    // nums[k] = diff + diff + nums[i];
    // Just We Need to Check for the an Index i,nums[i], if nums[i]+diff and nums[i]+diff+diff Exist...
  int count = 0;
        for(auto it = mp.begin( ); it != mp.end( ); it++){
        if(mp.find(it -> first + diff)!= mp.end( ) && mp.find(it->first + 2*diff)!= mp.end( )){
            count++;
        }
    }
 return count;
}       
};