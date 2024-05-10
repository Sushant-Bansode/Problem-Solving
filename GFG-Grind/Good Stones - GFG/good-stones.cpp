//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
   
    int f(int i, vector<int> &arr, vector<int> &dp) {
        if (i < 0 || i >= arr.size()) return 1;
        if (dp[i] == 2) return dp[i] = 0;
        if (dp[i] != -1) return dp[i];
        
        dp[i] = 2;
        
        return dp[i] = f(i + arr[i], arr, dp);
    }
    int goodStones(int n, vector<int> &arr) {
        // Code here
        vector<int> dp(n, -1);
        
        for (int i = 0; i < n; i++) {
            if (dp[i] == -1) {
                dp[i] = f(i, arr, dp);
            }
        }
        
        return accumulate(dp.begin(), dp.end(), 0);
    }  
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.goodStones(n,arr)<<endl;
    }
    return 0;
}
// } Driver Code Ends