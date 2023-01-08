class Solution {
public:
    int countGoodTriplets(vector<int>& nums, int a, int b, int c) {
   int count =0;
      int n=nums.size();
      for(int i=0; i<n; i++)
         {
           for(int j=i+1; j<n; j++ ){
              if(abs(nums[i]-nums[j])<=a){
                for(int k=j+1; k<n; k++){
                  if(abs(nums[k]-nums[j])<=b && abs(nums[k]-nums[i])<=c)count++;
                }
              }
           }
         }
         return count;
             
        
    }
};