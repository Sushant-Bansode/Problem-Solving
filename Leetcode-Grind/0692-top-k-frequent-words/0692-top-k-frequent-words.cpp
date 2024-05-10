class Solution {
public:

static bool comp(pair<string,int>&p1, pair<string,int>&p2){
   if(p1.second != p2.second){
       return p1.second > p2.second;
   }else{
       return p1.first < p2.first;
   }
}    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> mp;
        for(auto x: words){
            mp[x]++;
        }
        vector<pair<string,int>> vec;
        for(auto x: mp){
            vec.push_back({x.first,x.second});
        }
        sort(vec.begin( ), vec.end( ), comp);
        
     vector<string> ans;
        for(int i = 0; i< k; ++i){
            ans.push_back(vec[i].first);
        }
     return ans;   
    }
};