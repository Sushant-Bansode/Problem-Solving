class Solution {
public:
    int minimumMoves(string s) {
      int count = 0;
      int n = s.length( );
      for(int i = 0; i< n; ++i){
          if(s[i] == 'X'){
              count++;
              s[i] = 'O';
             if(i+1 < n) s[i+1] = 'O';
             if(i+2 < n) s[i+2] = 'O';
          }
      }
return count;        
    }
};