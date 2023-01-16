class Solution {
public:
    
    bool checkValid(vector<vector<int>>& matrix) {
      int n = matrix.size( );
        for(int i = 0; i< n; ++i){
            map<int, int> mp1;
            for(int j = 0; j < n; j++){
                mp1[matrix[i][j]]++;
            }
            if(mp1.size( ) != n){return false;}
        }
        
        for(int i = 0; i< n; ++i){
            map<int, int> mp2;
            for(int j = 0; j < n; j++){
                mp2[matrix[j][i]]++;
            }
            if(mp2.size( ) != n){return false;}
        }
        
  return true;      
    }
};