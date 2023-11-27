class Solution {
public:
    int dp[5][4][5001];
    int mod=1000000007;
    int solve(int k,int i,int j)
    {
        if(i<0 || j<0 || i>=4 || j>=3 || (i==3 && (j==0 || j==2)))                            //5th OR cond for * and # (:
            return 0;
        if(k==1)
            return 1;
        
        if(dp[i][j][k]!=-1)
            return dp[i][j][k];
        
        int a=solve(k-1,i+1,j-2)%mod;
            a=(a+solve(k-1,i+1,j+2))%mod;
            a=(a+solve(k-1,i+2,j-1))%mod;
            a=(a+solve(k-1,i+2,j+1))%mod;
            a=(a+solve(k-1,i-1,j-2))%mod;
            a=(a+solve(k-1,i-1,j+2))%mod;
            a=(a+solve(k-1,i-2,j-1))%mod;
            a=(a+solve(k-1,i-2,j+1))%mod;
            
        return dp[i][j][k]=a;
    }
    int knightDialer(int n)
    {
       int ans=0;
        memset(dp,-1,sizeof(dp));
       for(int i=0;i<4;i++)                                                       // dial Pad
           for(int j=0;j<3;j++)
               ans=(ans+solve(n,i,j))%mod;
        return ans;
    }
};
