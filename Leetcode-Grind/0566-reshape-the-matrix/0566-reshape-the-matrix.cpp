class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
 int m = mat.size( );
 int n =  mat[0].size( );   
   vector<vector<int>> ans;
 if(r == m && c == n){
    return mat; 
 }else if(r*c != m*n){
    return mat; 
 }
 int k = 0;
 int x = c;
 vector<int> temp;
  for(int i = 0; i< m; ++i){
      for(int j = 0; j< n; ++j){
        if(k < c-1){
        temp.push_back(mat[i][j]);    
        k++;
        }else if(k == c-1){
       k = 0;   
       temp.push_back(mat[i][j]);
       ans.push_back(temp);    
       temp.clear( );
       }   
      }
  }      
 return ans; 
    }
};