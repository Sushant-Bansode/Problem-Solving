class Solution {
public:
    void dfs(vector<vector<int>>& adj, vector<bool>& vis, int& nodesInComponent, int node)
    {
        vis[node]=true;
        ++nodesInComponent; 
        for(int e:adj[node])
        {
            if(!vis[e]) dfs(adj,vis,nodesInComponent,e);
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges)
     {
        vector<vector<int>>adj(n); 
        long long count=0,rem=n;
        for(auto& e:edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        vector<bool>vis(n,false); 
        for(int i=0;i<n;++i)
        {
            int c=0;
            if(!vis[i])
            { 
                dfs(adj,vis,c,i);
                count+=(rem-c)*c;
                rem-=c;
            }
        }
        return count;
    }
};