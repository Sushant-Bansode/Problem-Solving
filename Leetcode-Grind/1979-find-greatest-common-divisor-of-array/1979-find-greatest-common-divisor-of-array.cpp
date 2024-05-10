class Solution {
public:
 int gcd(int a,int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
    
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
   return gcd(min,max);     
    }
};