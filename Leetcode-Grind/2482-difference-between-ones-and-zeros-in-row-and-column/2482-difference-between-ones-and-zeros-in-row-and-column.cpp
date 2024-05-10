class Solution {
public:
vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
      int n = grid.size(), m = grid[0].size();
        vector<int> onesRowi(n), zerosRowi(n), onesColj(m), zerosColj(m); 
        
        for(int i=0; i<n; i++){
            int ze = 0, on = 0;
        for(int j=0; j<m; j++){
                if(grid[i][j] == 1) on++;
                else ze++;
            }
            onesRowi[i] = on;
            zerosRowi[i] = ze;
        }
        
        for(int i=0; i<m; i++){
            int ze = 0, on = 0;
        for(int j=0; j<n; j++){
                if(grid[j][i] == 1) on++;
                else ze++;
            }
            onesColj[i] = on;
            zerosColj[i] = ze;
        }
        
      vector<vector<int>>ans(n, vector<int>(m, 0));
            for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                ans[i][j] = onesRowi[i] + onesColj[j] - zerosRowi[i] - zerosColj[j];
            }
        }
        return ans;        
    }
};