class Solution {
public:
    int majorityElement(vector<int>& nums) {
     unordered_map<int,int> mp;  
      for(auto x: nums)
        mp[x]++;
        
      int n = nums.size( );  
    for(auto it = mp.begin( ); it!= mp.end( ); ++it){
        if(it-> second > n/2 ){
            return (it->first);
        }
    }
   return -1; 
    }
};