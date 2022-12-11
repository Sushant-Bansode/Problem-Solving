class Solution {
public:
    int findGCD(vector<int>& nums) {
     int min = nums[0];
      int max = nums[0];
      for(auto x: nums){
          if(x < min){
              min = x;
          }
      } 
      for(auto x: nums){
          if(x > max){
              max = x;
          }
      }    
   return __gcd(min,max);     
    }
};