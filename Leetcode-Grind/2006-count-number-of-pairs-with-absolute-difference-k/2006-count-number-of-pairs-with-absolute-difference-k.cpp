class Solution {
public:
int countKDifference(vector<int>& nums, int k) {
if(k < 0){
return 0;
}
      
int ans = 0;
map<int,int> mp;
 
for(int i = 0; i< nums.size( ) ; ++i){  
 ans += (mp[nums[i] + k] + mp[nums[i] - k]);          
 mp[nums[i]]++;
}

return ans;          
    }
};