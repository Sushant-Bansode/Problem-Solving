class Solution {
public:
    int coinChange(vector<int>& coins, int w) {
        int n=coins.size();
        int dp[n+1][w+1];
        for(int i=0;i<w+1;i++) dp[0][i]=INT_MAX-1;
        for(int i=0;i<n+1;i++) dp[i][0]=0;
        dp[0][0]=0;
        for(int i=1,j=1;j<w+1;j++){
            if(j%coins[0]==0){
                dp[i][j]=j/coins[0];
            }
            else{
                dp[i][j]=INT_MAX-1;
            }
        }
        for(int i=2;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(coins[i-1]<=j){
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        if (dp[n][w]==2147483646) return -1;
        return dp[n][w];
    }
};