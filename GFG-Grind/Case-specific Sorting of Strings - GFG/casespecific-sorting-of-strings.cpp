//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
   class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        vector<char> l,u;
        for (int i=0;i<n;i++){
           if (islower(str[i])){
            l.push_back(str[i]); }
         else{
            u.push_back(str[i]); }
            }
        sort(u.begin(),u.end());
        sort(l.begin(),l.end());
        int i=0,j=0;
        for (int x=0;x<n;x++){
            if (str[x]>='a' && str[x]<='z'){
              str[x]=l[i];
                i++;
            }
           else{
                str[x]=u[j];
                j++;
            }
        }
        return str;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends