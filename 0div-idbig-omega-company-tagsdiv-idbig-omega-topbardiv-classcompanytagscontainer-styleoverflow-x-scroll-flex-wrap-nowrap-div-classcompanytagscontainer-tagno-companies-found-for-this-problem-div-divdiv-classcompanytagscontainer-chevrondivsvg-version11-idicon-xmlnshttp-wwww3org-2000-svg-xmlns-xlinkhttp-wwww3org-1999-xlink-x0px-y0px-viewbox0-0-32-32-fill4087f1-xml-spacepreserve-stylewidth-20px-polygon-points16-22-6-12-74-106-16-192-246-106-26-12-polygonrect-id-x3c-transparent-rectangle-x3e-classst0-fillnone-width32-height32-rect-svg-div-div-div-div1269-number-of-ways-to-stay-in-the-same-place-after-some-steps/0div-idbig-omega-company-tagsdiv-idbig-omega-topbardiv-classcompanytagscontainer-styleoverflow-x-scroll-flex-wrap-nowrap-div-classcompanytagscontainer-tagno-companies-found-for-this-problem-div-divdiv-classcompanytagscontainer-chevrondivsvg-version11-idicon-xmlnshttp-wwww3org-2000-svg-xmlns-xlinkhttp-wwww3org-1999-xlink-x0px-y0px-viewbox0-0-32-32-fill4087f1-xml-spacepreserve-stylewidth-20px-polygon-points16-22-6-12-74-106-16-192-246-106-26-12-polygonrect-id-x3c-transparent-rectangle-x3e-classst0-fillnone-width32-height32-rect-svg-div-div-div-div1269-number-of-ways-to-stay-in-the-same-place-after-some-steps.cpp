class Solution {
public:
    int numWays(int steps, int arrLen) {
    const int MOD = 1000000007;
     arrLen = min(steps, arrLen);
    vector<vector<int>> dp(steps + 1, vector<int>(arrLen + 1, 0));

    dp[0][1] = 1;  

    for (int i = 1; i <= steps; ++i) {
        for (int j = 1; j <= arrLen; ++j) {
          //Same Position
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;  
          //left side move
            if (j > 1)
                dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % MOD;  
           //right Side move
            if (j < arrLen)
                dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % MOD;  
        }
    }

    return dp[steps][1];
}
};