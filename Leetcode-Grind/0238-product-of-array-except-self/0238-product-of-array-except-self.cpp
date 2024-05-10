class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ret;  
        // CASE 1 MORE THAN 1 ZEROES...
        int zeroCnt = count(begin(nums), end(nums), 0);
        if(zeroCnt > 1) return vector<int>(size(nums));   
        // CASE 2 1 ZERO...
        else if(zeroCnt == 1){
            long long prod = 1;
         for(auto &x: nums){
             if(x != 0){
                 prod *= x;
             }
         }
          for(auto &x: nums){
              if(x != 0){
                  x = 0;
              }else{
                 x = prod; 
              }   
          }   
         return nums;   
        }  
        // NO ZERO, SIMPLE DIVISION WLA SCENE... 
        else{
        int n = nums.size( );
        long long ans = 1;
        for(auto x: nums){ ans *= x;}  
      for(auto x: nums)
        ret.push_back(ans/x);
    
    return ret;    
    }
     return ret;       
    }    
};