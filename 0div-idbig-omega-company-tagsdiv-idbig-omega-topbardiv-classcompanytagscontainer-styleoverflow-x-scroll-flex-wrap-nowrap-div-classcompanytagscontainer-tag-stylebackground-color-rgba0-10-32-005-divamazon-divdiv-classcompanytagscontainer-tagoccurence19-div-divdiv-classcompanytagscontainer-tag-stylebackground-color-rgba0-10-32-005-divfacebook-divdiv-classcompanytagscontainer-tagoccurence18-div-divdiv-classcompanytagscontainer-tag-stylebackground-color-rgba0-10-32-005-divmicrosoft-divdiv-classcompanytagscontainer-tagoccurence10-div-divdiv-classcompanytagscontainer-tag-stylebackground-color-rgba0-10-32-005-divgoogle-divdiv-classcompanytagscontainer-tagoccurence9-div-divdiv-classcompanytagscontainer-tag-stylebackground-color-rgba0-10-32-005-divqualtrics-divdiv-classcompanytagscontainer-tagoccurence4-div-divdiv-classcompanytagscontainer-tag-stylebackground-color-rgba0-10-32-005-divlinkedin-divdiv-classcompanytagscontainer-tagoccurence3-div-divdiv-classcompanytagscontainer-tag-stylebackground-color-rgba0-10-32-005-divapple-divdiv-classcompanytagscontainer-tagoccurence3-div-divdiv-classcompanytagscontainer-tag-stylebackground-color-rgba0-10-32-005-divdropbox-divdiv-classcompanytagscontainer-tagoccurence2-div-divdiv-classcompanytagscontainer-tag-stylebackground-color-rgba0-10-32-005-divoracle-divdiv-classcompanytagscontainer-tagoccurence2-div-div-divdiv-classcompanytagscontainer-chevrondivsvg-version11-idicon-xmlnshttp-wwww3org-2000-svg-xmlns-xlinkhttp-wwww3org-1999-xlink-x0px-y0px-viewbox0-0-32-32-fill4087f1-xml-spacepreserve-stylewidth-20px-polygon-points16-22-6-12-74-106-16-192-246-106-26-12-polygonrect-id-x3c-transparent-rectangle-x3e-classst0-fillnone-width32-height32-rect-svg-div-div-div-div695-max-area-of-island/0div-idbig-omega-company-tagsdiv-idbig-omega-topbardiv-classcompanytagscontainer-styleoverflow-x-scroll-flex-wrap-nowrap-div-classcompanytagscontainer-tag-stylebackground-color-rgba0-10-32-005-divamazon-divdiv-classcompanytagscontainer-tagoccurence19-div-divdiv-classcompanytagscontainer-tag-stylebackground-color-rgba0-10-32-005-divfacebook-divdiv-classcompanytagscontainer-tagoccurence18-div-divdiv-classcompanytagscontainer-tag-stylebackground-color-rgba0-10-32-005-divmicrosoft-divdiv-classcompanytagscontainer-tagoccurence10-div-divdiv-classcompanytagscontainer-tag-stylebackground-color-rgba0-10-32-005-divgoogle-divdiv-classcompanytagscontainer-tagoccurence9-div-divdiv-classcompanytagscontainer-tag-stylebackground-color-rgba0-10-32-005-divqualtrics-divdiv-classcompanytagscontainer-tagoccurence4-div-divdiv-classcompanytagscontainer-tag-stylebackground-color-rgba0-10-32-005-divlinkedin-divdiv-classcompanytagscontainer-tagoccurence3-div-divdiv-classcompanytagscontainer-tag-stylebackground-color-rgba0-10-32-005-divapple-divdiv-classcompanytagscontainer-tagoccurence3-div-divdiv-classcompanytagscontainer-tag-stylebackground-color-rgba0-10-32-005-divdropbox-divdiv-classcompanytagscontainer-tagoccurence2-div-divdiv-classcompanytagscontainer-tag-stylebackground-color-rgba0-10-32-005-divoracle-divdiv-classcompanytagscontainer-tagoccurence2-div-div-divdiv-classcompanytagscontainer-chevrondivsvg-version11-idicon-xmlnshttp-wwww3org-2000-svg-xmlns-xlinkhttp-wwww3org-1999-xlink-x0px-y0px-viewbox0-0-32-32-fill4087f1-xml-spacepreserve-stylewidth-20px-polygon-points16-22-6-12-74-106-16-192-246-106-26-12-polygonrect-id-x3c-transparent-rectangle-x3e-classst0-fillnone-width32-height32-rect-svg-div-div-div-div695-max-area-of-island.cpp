class Solution {
    vector<vector<int>>* m_grid; // trying to achieve better performance
    int n;
    int m;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       m_grid = &grid;

       n = grid.size();
       m = grid.begin()->size();

       int max = 0;

       for(int i = 0; i < n; ++i) {
           for(int j = 0; j < m; ++j) {
               if(grid[i][j] == 1) {
                   auto area = getIslandArea(i,j);
                   max = std::max(max, area);
               }
           }
       }
        return max;
    }


    int getIslandArea(int i, int j) {
        if(i < 0 || i >= n || j < 0 || j >= m)
            return 0 ;

        if((*m_grid)[i][j] != 1)
            return 0;

        (*m_grid)[i][j] = 0;

        int bottom = getIslandArea(i+1, j);
        int top = getIslandArea(i-1, j);
        int right = getIslandArea(i, j+1);
        int left = getIslandArea(i, j-1);
        return bottom + top + left + right + 1;
    }
};