class Solution {
public:
    int rearrangeCharacters(string s, string target) {
       int ans = INT_MAX;
        map<char,int> mp1;
        map<char,int> mp2;
        for(auto x: s){mp1[x]++;}
        for(auto x: target){mp2[x]++;}
    for(auto x: mp2){
      ans = min(ans,mp1[x.first]/x.second);   
    }  
    return ans;    
    }
};