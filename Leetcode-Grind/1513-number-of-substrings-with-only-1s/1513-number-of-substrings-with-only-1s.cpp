class Solution {
public:
    int numSub(string s) {
       long long count = 0, ans = 0, mod = 1e9+7;
     for(int i = 0; i<s.length( ); ++i){
      if(s[i] == '1'){
          count++;
      ans += count;    
      }else {
          count = 0;
      }   
   ans = ans%mod;  
     }   
 return ans;       
    }
};