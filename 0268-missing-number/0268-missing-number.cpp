class Solution {
public:
    int missingNumber(vector<int>& nums) {
    sort(nums.begin( ), nums.end( ));
    int n = nums.size( ); 
    if(n- nums[n-1] == 1)
    return n;    
    for(int i = 0; i< nums.size( ); ++i){
          if(nums[i] != i){
           return i;   }
      }
    return nums.size( );    
       
    }
};