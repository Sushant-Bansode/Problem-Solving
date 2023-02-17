class Solution {
public:
long long zeroFilledSubarray(vector<int>& nums) {
        long long res=0;
        int prev;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                prev=i;
                i++;
                while(i<nums.size() && nums[i]==0){
                    i++;
                }
                long long n=(i-prev);
                res+=((n*(n+1))/2);
            }        
        }
        return res;
    }
};