class Solution {
public:
    
    int maxNumOfMarkedIndices(vector<int>& nums) 
    {
        vector<int> sorted = nums;
        sort(sorted.begin(),sorted.end());
        nums=sorted;        
        int s=0,e=(nums.size()+1)/2,count=0;
        while(e<nums.size())
        {
            if(2*nums[s]<=nums[e])
            {
                s++;
                count++;
            }
            e++;
        }
        
       return 2*count;
    }
};