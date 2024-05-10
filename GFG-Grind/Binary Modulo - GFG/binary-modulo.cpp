//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
            int ans=1;
            int sol=0;
            if(s[s.size()-1]=='1'){
                    sol=((sol%m)+(ans%m))%m;
            }
            for(int i = s.size()-2 ; i>=0 ; i--){
                ans=(ans*2)%m;
                if(s[i]=='1'){
                    sol=((sol%m)+(ans%m))%m;
                }
            }
            return sol;
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends