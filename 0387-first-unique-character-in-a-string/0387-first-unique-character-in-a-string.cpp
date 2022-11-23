class Solution {
public:
    int firstUniqChar(string s) {
    unordered_map<char,int> mp ;    
    for(auto x : s)
    mp[x]++;  
    
   int j = 0;     
    for(int i = 0; i< s.length( ); ++i){
        if(mp[s[i]] == 1)
        return i;    
    j++;
    }
    
  if(j == s.length( ))
  return -1;
  else
  return -1;    
    }
};