class Solution {
public:
int threeSumClosest(vector<int>& nums, int t) {
     sort(nums.begin(),nums.end());
         int n = nums.size();
        int ans=0,as=INT_MAX;
    // Select a Specific Integer,and Traverse the Sorted array in Two Pointer Manner to Find the Minimum difference, wala in Each case...
        for(int i=0;i<n;i++){
             int hi=n-1,lo=i+1;
            // two Pointer For Every Single Integer
            while(hi>lo){
                int a=nums[hi]+nums[lo]+nums[i];
                if(abs(t-a)<as){
                    as=abs(t-a);
                    ans=a;
                }
                if(a<t)lo++;
                if(a>t)hi--;
                if(a==t)return a;
            }
        }
      return ans;
    }
};