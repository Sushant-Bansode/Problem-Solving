class Solution {
public:
bool increasingTriplet(vector<int>& nums) {
    int n=nums.size();
        int count=0;
        int first=INT_MAX,second=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<= first)
            {
                first = nums[i];
            }
            else if(nums[i]<= second)
            {
                second = nums[i];
            }
            else if(nums[i] > second && nums[i] > first)
            {
                return true;
            }
        }
        return false;
   }
};