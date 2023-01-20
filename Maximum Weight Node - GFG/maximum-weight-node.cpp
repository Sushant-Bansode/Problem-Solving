//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
  int maxWeightCell(int N, vector<int> edge) // E --> edge 
  {
      // code here
      int u=0,k=0;


      unordered_map<int,int>m;


      for(int i=0; i<N; i++){
       if(edge[i]==-1)
        continue;


          m[edge[i]]+=i;


          if(u<m[edge[i]]){


             u=m[edge[i]];


             k=edge[i];


          }
      }


      return k;
  }
};

//{ Driver Code Starts.
int main(){
   int tc;
   cin >> tc;
   while(tc--){
      int N;
      cin >> N;
      vector<int> Edge(N);
      for(int i=0;i<N;i++){
        cin>>Edge[i];
      }
      Solution obj;
      int ans=obj.maxWeightCell(N, Edge);
      cout<<ans<<endl;
   }
   return 0;
}
// } Driver Code Ends