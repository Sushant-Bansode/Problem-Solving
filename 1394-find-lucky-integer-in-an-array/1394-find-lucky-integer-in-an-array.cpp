class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> ans;
        map<int,int> mp;
        
        for(auto x : arr) mp[x]++;
        
        for(auto i : mp){
           if(i.first==i.second) 
          ans.push_back(i.second); }
        
        if(ans.size()>=1){
        return ans[ans.size()-1];
        }
        else {
        return -1;
        }
    }
};