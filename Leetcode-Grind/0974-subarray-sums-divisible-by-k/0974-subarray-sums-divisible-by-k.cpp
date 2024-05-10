class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt=0;
        map<int,int>m;
        vector<int>sum(nums.size());
        sum[0]=nums[0];
        int a=sum[0];
        while(a<0){
            a=a+k;
        }
        m[a%k]++;
        for(int i=1;i<nums.size();i++){
            sum[i]=sum[i-1]+nums[i];
        a=sum[i];
        while(a<0){
            a=a+k;
        }
        m[a%k]++;
        }
        int ans=0;
        for(auto val:m){
            ans+=(val.second-1)*(val.second)/2;
        }
        return ans+m[0];
    }
};