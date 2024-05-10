//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
 public:
    bool check(vector<int>& prefSum, int i, int K) {
        int partition = 0;
        for(int sum : prefSum) {
            if(sum%i == 0) partition++;
        }
        return partition >= K;
    }
  
    int solve(int N, int K, vector<int> &arr) {
       // code here
         
       vector<int> prefSum = arr;
        for(int i=1; i<N; i++) {
            prefSum[i] += prefSum[i-1];
        }
        
        int sum = prefSum[N-1], res = 1;
        for(int i=1; i<=sqrt(sum); i++) {
            if(sum%i == 0) {
                if(check(prefSum, i, K)) res = max(res, i);
                if(sum/i != i and check(prefSum, sum/i, K)) {
                    res = max(res, sum/i);
                }
            }
        }
        return res;
    }
};    

//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        
        vector<int> arr(N);
        Array::input(arr,N);
        
        Solution obj;
        int res = obj.solve(N, K, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends