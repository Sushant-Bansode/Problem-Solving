class Solution {
public:
int numSpecial(vector<vector<int>>& mat) {
    int n = mat.size(), m = mat[0].size();
        vector<int> row,col; //no of ones.
        int specialPosition = 0;
        for(int i=0; i<n; ++i){
            int ones = 0;
            for(int j=0; j<m; ++j){
                if(mat[i][j] == 1) ones++;
            }
            row.push_back(ones);
        }
        for(int i=0; i<m; ++i){
            int ones = 0;
            for(int j=0; j<n; ++j){
                if(mat[j][i] == 1) ones++;
            }
            col.push_back(ones);
        }
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(mat[i][j]){
                    if(row[i] == 1 && col[j] == 1) specialPosition++;
                }
            }
        }
        return specialPosition;
    
    }
};