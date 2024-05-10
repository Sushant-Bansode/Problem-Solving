//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {

  public:

    int mod=1e9+7;

   int helper(int i,int j,int &n,int &m,vector<vector<int>>& a,vector<vector<int>>& dp){

        if(a[i][j] == 0) return 0;

        else if(i == n - 1 && j == m - 1) return 1;

        if(i < n && j < m && dp[i][j] != -1) return dp[i][j];

        dp[i][j] = 0;

        if(i != n - 1) dp[i][j] =(dp[i][j]+ helper(i + 1,j,n,m,a,dp))%mod;

        if(j != m - 1) dp[i][j] =(dp[i][j]+ helper(i,j + 1,n,m,a,dp))%mod;

        return dp[i][j]%mod;

    }

    int uniquePaths(int n, int m, vector<vector<int>> &grid) {

        // code here

        vector<vector<int>> dp(n,vector<int>(m,-1));

        return helper(0,0,n,m,grid,dp);

    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends