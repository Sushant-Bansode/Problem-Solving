class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      int n = mat.size( );
        long long ans = 0;
        for(int i = 0; i< n;i++){
            for(int j = 0; j < n; ++j){
                if(i == j){
                    ans += mat[i][j];
                }
            }
        }
        
        for(int i = 0; i< n;i++){
            for(int j = 0; j < n; ++j){
                if(j == n - i-1 && i != j){
                    ans += mat[i][j];
                }
            }
        }
    return ans;    
    }
};