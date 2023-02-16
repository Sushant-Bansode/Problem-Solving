class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        set<int> s1,s2,s3;
        vector<int> ans;
        for(auto x: nums1){s1.insert(x);}
        for(auto x: nums2){s2.insert(x);}
         for(auto x: nums3){s3.insert(x);}
    map<int,int> mp;
        for(auto x: s1){mp[x]++;}
         for(auto x: s2){mp[x]++;}
         for(auto x: s3){mp[x]++;}
    for(auto x: mp){
        if(x.second >= 2){
            ans.push_back(x.first);
        }
    }
 return ans;       
    }
};