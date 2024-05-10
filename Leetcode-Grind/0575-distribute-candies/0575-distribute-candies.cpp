class Solution {
public:
    int distributeCandies(vector<int>& nums) {
    map<int,int> mp;
   for(auto x: nums){mp[x]++;}
    if(mp.size( ) > nums.size( )/2){
     return nums.size( )/2;   
    }else{
      return mp.size( );
    }    
    }
};