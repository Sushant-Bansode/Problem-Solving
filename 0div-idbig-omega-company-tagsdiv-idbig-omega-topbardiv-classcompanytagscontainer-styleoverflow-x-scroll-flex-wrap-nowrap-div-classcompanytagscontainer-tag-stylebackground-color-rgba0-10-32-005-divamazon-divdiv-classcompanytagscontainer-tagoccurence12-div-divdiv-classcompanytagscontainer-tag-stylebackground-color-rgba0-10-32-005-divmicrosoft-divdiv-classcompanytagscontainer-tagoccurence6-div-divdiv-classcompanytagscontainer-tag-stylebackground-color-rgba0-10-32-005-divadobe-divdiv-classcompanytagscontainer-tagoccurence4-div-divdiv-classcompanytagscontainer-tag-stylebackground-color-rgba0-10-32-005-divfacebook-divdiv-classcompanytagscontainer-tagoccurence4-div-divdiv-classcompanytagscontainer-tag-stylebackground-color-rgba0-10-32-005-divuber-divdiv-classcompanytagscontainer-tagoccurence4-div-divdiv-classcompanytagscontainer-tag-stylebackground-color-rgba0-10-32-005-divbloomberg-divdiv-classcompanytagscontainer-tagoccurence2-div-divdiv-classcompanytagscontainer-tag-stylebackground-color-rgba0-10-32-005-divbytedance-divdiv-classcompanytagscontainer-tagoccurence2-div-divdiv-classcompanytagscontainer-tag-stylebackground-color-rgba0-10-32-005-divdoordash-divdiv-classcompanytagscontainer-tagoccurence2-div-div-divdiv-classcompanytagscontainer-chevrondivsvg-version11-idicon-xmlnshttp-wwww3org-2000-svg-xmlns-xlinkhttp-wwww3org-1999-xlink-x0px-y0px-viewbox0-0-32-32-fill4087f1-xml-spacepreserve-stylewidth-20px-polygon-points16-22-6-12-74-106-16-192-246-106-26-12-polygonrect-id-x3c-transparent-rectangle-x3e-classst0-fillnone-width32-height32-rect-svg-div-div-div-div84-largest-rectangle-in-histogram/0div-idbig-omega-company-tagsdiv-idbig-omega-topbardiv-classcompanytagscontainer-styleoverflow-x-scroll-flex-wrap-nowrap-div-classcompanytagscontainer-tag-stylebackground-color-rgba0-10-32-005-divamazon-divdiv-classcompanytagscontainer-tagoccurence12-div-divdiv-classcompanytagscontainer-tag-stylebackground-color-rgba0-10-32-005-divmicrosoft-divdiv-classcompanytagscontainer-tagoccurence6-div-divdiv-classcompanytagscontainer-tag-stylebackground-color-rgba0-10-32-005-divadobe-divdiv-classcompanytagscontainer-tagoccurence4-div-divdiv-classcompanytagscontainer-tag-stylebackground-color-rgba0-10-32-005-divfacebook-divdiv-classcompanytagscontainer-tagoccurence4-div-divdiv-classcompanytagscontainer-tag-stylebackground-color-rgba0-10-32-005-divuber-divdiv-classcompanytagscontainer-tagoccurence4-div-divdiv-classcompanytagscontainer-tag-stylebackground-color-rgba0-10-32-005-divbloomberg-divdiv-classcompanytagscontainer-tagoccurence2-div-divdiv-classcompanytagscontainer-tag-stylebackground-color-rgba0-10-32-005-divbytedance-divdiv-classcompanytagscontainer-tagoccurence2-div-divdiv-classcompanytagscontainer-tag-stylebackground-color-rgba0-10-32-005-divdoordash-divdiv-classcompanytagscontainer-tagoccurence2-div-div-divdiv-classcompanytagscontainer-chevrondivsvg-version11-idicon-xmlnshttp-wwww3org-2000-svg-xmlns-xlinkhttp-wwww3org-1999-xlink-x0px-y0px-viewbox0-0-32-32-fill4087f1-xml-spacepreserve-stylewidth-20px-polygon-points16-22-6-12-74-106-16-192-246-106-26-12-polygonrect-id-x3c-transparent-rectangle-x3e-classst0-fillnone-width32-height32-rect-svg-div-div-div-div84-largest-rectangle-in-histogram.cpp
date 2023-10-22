class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>arr=heights;
         int n=arr.size();
        vector<int>nsi(n),psi(n);
        for(int i=n-1;i>=0;i--)
        {
            nsi[i]=i+1;
            while(nsi[i]!=n && arr[nsi[i]]>arr[i])
               nsi[i]=nsi[nsi[i]];
        }

        for(int i=0;i<n;i++)
        {
            psi[i]=i-1;
            while(psi[i]!=-1 && arr[i]<=arr[psi[i]])
               psi[i]=psi[psi[i]];
        }

        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,(nsi[i]-psi[i]-1)*arr[i]);
        }

        return ans;
        
    }
};