//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
          //code here
            int cnt = 0, cntFromFirstNeg = 0;
           bool isPos = true;
           int ans = 0;
           for (auto &x : arr){
               cnt++;
               if (x == 0){
                   cnt = 0;
                   cntFromFirstNeg = 0;
                   isPos = true;
               }
               else if (x < 0){
                   isPos ^= 1;
                   cntFromFirstNeg++;
               }
               else{
                   cntFromFirstNeg += cntFromFirstNeg != 0;
               }
               ans = max(ans, isPos ? cnt : cntFromFirstNeg - 1);
           }
           return ans;
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends