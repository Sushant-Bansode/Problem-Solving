class Solution {
public:
    bool solve(int row,int col,int ind,vector<vector<char>>& board,vector<vector<bool>>&visited,string word)
    {
        if(ind==word.size())
            return true;
        if(row>=board.size()||col>=board[0].size()||row<0||col<0)
            return false;
        
        if(board[row][col]==word[ind]&& visited[row][col]==false)
        {
                  visited[row][col]=true;
            
                if(solve(row+1,col,ind+1,board,visited,word)||
                solve(row-1,col,ind+1,board,visited,word)||
                solve(row,col+1,ind+1,board,visited,word)||
                solve(row,col-1,ind+1,board,visited,word))
                    return true;
              
                else
                {
                    visited[row][col]=false;
                      return false;
                    
                }
         
        }
        
               return false;
                   
        
        
      
         
    }
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        
        int n=board.size();
        vector<vector<bool>>visited;
        
        for(int i=0;i<n;i++)
        {   
            vector<bool>v(board[0].size());
            for(int j=0;j<board[i].size();j++)
            {
                v[j]= false;
            }
            visited.push_back(v);
        }
        bool ans=false;
      for(int i=0;i<n;i++){
          for(int j=0;j<board[0].size();j++){
              if(board[i][j]==word[0])
                ans=ans|solve(i,j,0,board,visited,word);
                if(ans)
                return ans;
          }
      }
       return ans;
       
    }
};