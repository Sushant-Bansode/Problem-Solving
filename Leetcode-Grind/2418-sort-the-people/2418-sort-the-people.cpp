class Solution {
public:
vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mp;
        vector<string> ans;
for(int i=0; i < size(names); i++){
            mp[heights[i]] = names[i];
 }   

 for(auto x = mp.rbegin(); x != mp.rend(); ++x) { 
    ans.push_back(x->second);
 }

return ans;
} 
};