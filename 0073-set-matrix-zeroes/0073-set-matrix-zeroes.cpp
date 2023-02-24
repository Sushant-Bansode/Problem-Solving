class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size( );
        int n = mat[0].size( );
        map<int,int>col;
        map<int,int>row;
       for(int i = 0; i< m; ++i) {
           for(int j = 0; j< n; ++j) {
               if(mat[i][j] == 0) {
                  col[j]++;
                  row[i]++; 
               }
           }
       }
        
      for(int i = 0; i< m; ++i){
            for(int j = 0; j< n; ++j){
                if(row[i] > 0 || col[j] > 0){
                mat[i][j] = 0;   
              }
            }  
        }    
    }
};