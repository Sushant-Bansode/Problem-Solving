class Solution {
public:
    int maximumGap(vector<int>& nums) {
      sort(nums.begin( ), nums.end( ));
    int diff = 0, res = INT_MIN;    
 if(nums.size( ) < 2){
     return 0;
 } 
 for(int i = 1; i< nums.size( ); ++i){
    diff = nums[i] - nums[i-1];
    res = max(diff, res);  
  }  
return res;        
    }
};