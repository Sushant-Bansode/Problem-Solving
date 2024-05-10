class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int, int> mp;
        for(auto x: nums){mp[x]++;}
     while(mp[original] != 0){
        original *= 2;   
     }
 return original;       
   }
};