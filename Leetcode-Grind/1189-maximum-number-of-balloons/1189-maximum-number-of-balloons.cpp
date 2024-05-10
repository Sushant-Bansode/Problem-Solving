class Solution {
public:
    int maxNumberOfBalloons(string text) {
     string req = "balloon";   
   map<char,int> mp1;
   map<char,int> mp2;
        for(int i = 0; i< text.length( ); ++i){
            mp2[text[i]]++;
        }
        for(int i = 0; i< req.length( ); ++i){
            mp1[req[i]]++;
        } 
  int ans = INT_MAX;
       for(auto x: mp1){
           ans = min(ans, mp2[x.first]/x.second);
       } 
  return ans;  
    }
};