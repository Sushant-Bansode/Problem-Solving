class Solution {
public:
    int f(int ind,vector<int>&vis)
    {
        if(ind==0)
        {
            return 1;
        }

        int ans=0;

        for(int i=1;i<vis.size();i++)
        {
            if(vis[i]==0 && (ind%i==0 || i%ind==0))
            {
                vis[i]=ind;
                ans+=f(ind-1,vis);
                vis[i]=0;
            }
        }
        return ans;
    }
    int countArrangement(int n) {
        vector<int>vis(n+1);

        return f(n,vis);
        
    }
};