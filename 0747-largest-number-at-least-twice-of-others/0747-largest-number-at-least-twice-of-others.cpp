class Solution {
public:
    int dominantIndex(vector<int>& nums) {
   int maxe = nums[0], index = 0;
        for(int i = 0; i< nums.size( ); ++i){
            if(nums[i] > maxe){
                maxe = nums[i];
                index = i;
            }
        }
  bool flag = false;
        for(auto x: nums){
            if(maxe < x*2 && maxe != x){flag = true;}
        }
  if(flag){
    return -1;  
  }else{
    return index;  
  }      
  
    }
};