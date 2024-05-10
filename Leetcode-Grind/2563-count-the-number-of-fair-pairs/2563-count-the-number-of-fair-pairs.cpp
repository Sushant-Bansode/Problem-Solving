class Solution {
public:
long long countFairPairs(vector<int>& nums, int lower, int upper){
    sort(nums.begin(), nums.end());
        int i=0, j=nums.size()-1;
        //upper
        long long up=0;
        while(i<j){
            if (nums[i]+nums[j] <= upper){
                up += (j-i); 
                i++;
            }
            else if (nums[i]+nums[j] > upper){
                j--;
            }
        }

        //lower
        long long lo=0;
        i=0; 
        j=nums.size()-1;
        while(i<=j){
            if (nums[i]+nums[j] <= lower-1){
                lo += (j-i);
                i++;
            }
            else if (nums[i]+nums[j] > lower-1){
                j--;
            }
        }
        return up-lo;
    }
};