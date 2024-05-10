class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
       int m = matrix.size( );
       int n = matrix[0].size( );
       for(int i = 0; i< m-1; ++i){
           for(int j = 0; j< n-1; ++j){
               if((j +1) < n && (i + 1) < m && matrix[i+1][j+1] != matrix[i][j]){
                   return false;
               }
           }
       }
 return true;       
    }
};