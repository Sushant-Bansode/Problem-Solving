class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.size();
        vector<int>dp(n+1,0);  
        for (int i=n-1;i>=0;i--){
            dp[i]= dp[i+1]+1;
        for (auto it: dictionary) {
            if (s.compare(i,it.size(),it)==0){
                dp[i]=min(dp[i],dp[i+it.length()]);
            }
        }
    }

    return dp[0];
}
};