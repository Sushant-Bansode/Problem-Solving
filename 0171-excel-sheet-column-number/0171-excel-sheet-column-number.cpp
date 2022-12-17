class Solution {
public:
    
    int titleToNumber(string s) {   
      int n = s.length( );   
      int ans = 0;
       int p = n-1; 
        for(int i = 0; i < n; i++){
            int ch = s[i] - 64;
          ans = ans + ch*pow(26,p--);    
        }
return ans;    
    }
};