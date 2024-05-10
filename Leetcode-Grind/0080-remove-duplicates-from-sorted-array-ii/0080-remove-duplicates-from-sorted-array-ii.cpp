class Solution {
public:
int removeDuplicates(vector<int>& nums) {
        int ans = 0;
        int k = 0;
        map<int,int> mp;
        for(auto x: nums){mp[x]++;}
        for(auto x: mp){
            if(x.second >=2){
                nums[k++] = x.first;
                nums[k++] = x.first;
            }else{
                nums[k++] = x.first;         
          }
        }
    return k;  
    }
};