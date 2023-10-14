class Solution {
public:
    int dp[501][1001];
    int solve(int i,int s,int n,vector<int>&v,vector<int>&t)
    {   
        if(s>=n)
            return 0;
        if(i>=n)
            return 1000000000;
        if(dp[i][s]!=-1)
            return dp[i][s];
        int m=solve(i+1,s,n,v,t);
        m=min(m,v[i]+solve(i+1,s+t[i]+1,n,v,t));
        return dp[i][s]=m;
    }
    int paintWalls(vector<int>& v, vector<int>& t) {
        memset(dp,-1,sizeof(dp));
        int n=v.size();
        int ans=solve(0,0,n,v,t);
        return ans;
    }
};