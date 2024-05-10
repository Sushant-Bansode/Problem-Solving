class Solution {
public:
int sumFourDivisors(vector<int>& nums) {
          int i,j,k,sum=0;
        for(i=0;i<nums.size();i++)
        {   
            int bsum=0,t=0;
            
            for(j=1;j*j<=nums[i];j++)
            {  
                if(nums[i]%j==0){
                 t++;
                bsum+=j;   
                 if(nums[i]/j != j){
                    bsum += nums[i]/j;
                    t++; 
                 }    
               }
            }
            if(t== 4){
             sum+=bsum;
            }
        }
        return sum;
    }
};