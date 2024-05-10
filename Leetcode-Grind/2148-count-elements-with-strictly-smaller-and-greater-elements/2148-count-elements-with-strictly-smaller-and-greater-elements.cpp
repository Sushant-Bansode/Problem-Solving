class Solution {
public:
    int countElements(vector<int>& nums) {    
 map<int,int>mp;       
 for(auto x : nums){mp[x]++;}
 sort(nums.begin( ), nums.end( ));      
int count = 0;
for(auto x: mp){count += x.second;}
count -= mp[nums[0]];
if(mp.size( ) >= 2) {
count -= mp[nums[nums.size( ) -1]]; 
}      
 return count;       
    }
};