class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map <int,int> mp;
        for(int i:nums) mp[i]++;
        // Total Pairs and Total LeftOvers, Count...
        int count=0,count1=0;
        for(auto it:mp){
            count+=(it.second/2);
            count1+=(it.second%2);
        }
        return {count,count1};  
    }
};