class Solution {
public:
vector<int> luckyNumbers (vector<vector<int>>& matrix) {
     vector<int> res;
        vector<int> row(matrix.size(),0);// store min in row(i)
        vector<int> col(matrix[0].size(),0);// store max in col(j)
        for(int i=0;i<matrix.size();i++)
        {
            int m=matrix[i][0];
            for(int j=1;j<matrix[0].size();j++)
                m=min(m,matrix[i][j]);
            row[i]=m;
        }
        for(int j=0;j<matrix[0].size();j++)
        {
            int m=matrix[0][j];
            for(int i=1;i<matrix.size();i++)
                m=max(m,matrix[i][j]);
            col[j]=m;
        }
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(row[i]==col[j])// if min of row(i) == max of col(j) 
                    res.push_back(row[i]);
            }
        }
        return res;
           
    }
};
