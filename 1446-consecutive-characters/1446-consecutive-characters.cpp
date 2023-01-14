class Solution {
public:
    int maxPower(string s) {
   int ans = INT_MIN;
     for(int i = 0; i< s.length() ; ++i){
         int count = 1;
      while(s[i] == s[i+1]){
          count++;
         i++; 
      }
    ans = max(count, ans);     
     }   
 return ans;   
    }
};