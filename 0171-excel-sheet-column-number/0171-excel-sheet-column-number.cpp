class Solution {
public:
    
    int titleToNumber(string s) {   
      int n = s.length( );   
      int ans = 0;
       int p = 0; 
        for(int i = n-1; i>=0; i--){
            int ch = s[i] - 64;
          ans = ans + ch*pow(26,p++);    
        }
return ans;    
    }
};