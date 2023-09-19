class Solution {
public:
    int networkBecomesIdle(vector<vector<int>>& edges, vector<int>& pat) {
        int n = pat.size();
        vector<vector<int>> adj(n);
        for(auto &i:edges)
        {
            int a = i[0];
            int b = i[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<int> vis(n);
        vector<int> dis(n);
        dis[0] = 0;
        vis[0] = 1;
        queue<int> q;
        q.push(0);
        while(!q.empty())
        {
            int siz = q.size();
            for(int i=0;i<siz;i++)
            {
                int node = q.front();
                q.pop();
                for(auto &j:adj[node])
                {
                    if(!vis[j])
                    {
                        vis[j] = 1;
                        dis[j] = dis[node]+1;
                        q.push(j);
                    }
                }
            }
        }
        int ans = 0;
        for(int i=1;i<n;i++)
        {
            int tmp = dis[i];
            tmp*=2;
            if(pat[i]<=tmp)
            {
                int tmp1 = ceil((double)tmp/pat[i]);
                ans = max(ans,(tmp1-1)*pat[i]+tmp+1);
            }
            else
            {
                ans = max(ans,tmp+1);
            }
        }
        return ans;
    }
};