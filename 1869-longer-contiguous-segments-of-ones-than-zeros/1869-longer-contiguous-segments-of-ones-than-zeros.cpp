class Solution {
public:
    bool checkZeroOnes(string nums) {
   int count1 = 0, ans1 = INT_MIN, count0 = 0, ans0 = INT_MIN;
      for(int i = 0; i< nums.length( ); i++){
           if(nums[i] == '0'){
              count0++;
          ans0 = max(ans0, count0);
          }
          else{
              count0 = 0;
          }
          
          if(nums[i] == '1'){
              count1++;
          ans1 = max(ans1, count1);
          }
          else{
              count1 = 0;
          }
      }
     ans1 = max(ans1, count1);       
     ans0 = max(ans0, count0);        
 return(ans1 > ans0);       
    }
};