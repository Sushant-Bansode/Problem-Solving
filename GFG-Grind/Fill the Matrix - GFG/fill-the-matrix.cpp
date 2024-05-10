//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int n, int m, int x, int y){    
         vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<int,int>>q;
        q.push({x-1,y-1});
        vis[x-1][y-1]=1;
        
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        int size=0;
        int ans=0;
        vis[x-1][y-1]=1;
        while(!q.empty())
        {
            int size=q.size();
            
            while(size--)
            {
                auto it=q.front();
                int r=it.first;
                int c=it.second;
                q.pop();
                
                for(int i=0;i<4;i++)
                {
                    int row=r+dr[i];
                    int col=c+dc[i];
                    
                    if(row>=0 && row<n && col>=0 && col<m && !vis[row][col])
                    {
                        q.push({row,col});
                        vis[row][col]=1;
                    }
                }
                
               
            }
             ans++;
        }
        return ans-1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends