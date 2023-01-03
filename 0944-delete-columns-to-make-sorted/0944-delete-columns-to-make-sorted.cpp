class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
    int count=0;
        int row = strs.size();
        int col = strs[0].size();
        
        for(int j=0; j<col; j++)
        {
            for(int i= 1; i<row ; i++)
            {
                if(strs[i-1][j] > strs[i][j])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};