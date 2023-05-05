class Solution {
public:
    int countNicePairs(vector<int>& nums) {
         int M=1e9+7, cnt=0;
        map<int, int>mp;
        vector<int>v;
        for(int i=0; i<nums.size(); i++){
            int x=nums[i], val=0;
            while(x){
                val+=x%10;
                if(x/10){val*=10;}
                x/=10;
            }
            v.push_back(val);
        }
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]-v[i]]++;
        }
        for(auto it:mp)
        {  
            if(it.second > 1)
            {
            long long num = it.second;
            long long temp = (num *(num-1))/2 %M;
            count+=temp;
            count = count % M;
            }
        }
       return count%M;  
    }
};