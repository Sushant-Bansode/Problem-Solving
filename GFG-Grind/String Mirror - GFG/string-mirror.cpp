//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string s){
        string temp="";
        temp+=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]<s[0] && s[i]<=s[i-1]){
                temp+=s[i];
            }
            else break;
        }
        string ans=temp;
        reverse(temp.begin(),temp.end());
        ans+=temp;
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends