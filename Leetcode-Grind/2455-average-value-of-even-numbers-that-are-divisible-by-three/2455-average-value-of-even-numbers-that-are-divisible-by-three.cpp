class Solution {
public:
    int averageValue(vector<int>& nums) {
    int count = 0, sum  = 0;  
    for(auto x: nums){
     if(x != 3 && x%6 == 0){
       count++;
       sum += x;  
      }
    }
if(count == 0){
    return 0;
}        
int ans = sum/count;
   return ans;     
  }
};