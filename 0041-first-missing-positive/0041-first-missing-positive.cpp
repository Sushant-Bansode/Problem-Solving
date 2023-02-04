class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
   map<int,int> mp;
   for(auto x: nums){mp[x]++;}
   int n = nums.size( );     
  
 for(int i = 1; i<= n; ++i){
    if(mp.find(i) == mp.end()){
        return i;
    }
 }
return n+1;        
    }
};