//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int minVal(int a, int b) {
       // code here
        int res=0;
      int mini=__builtin_popcount(b);
       for(int i=31;i>=0 && mini;i--){
         if(a&(1<<i)){
           res|=(1<<i);
             mini--;
          }
        }
        for(int i=0;i<32 && mini;i++){
          if((res&(1<<i))==0){
              res|=(1<<i);
              mini--;
          }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends