#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector <int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        
        
        int mini=0;
        int maxi=0;
        int idx=1;
        for(int i=0;i<k;i++){
            maxi+=arr[idx];
            idx+=2;
        }
        
        idx=k-1;
        mini=arr[k];
        int back=n-1;
        while(idx>0){
            mini+=arr[back];
            idx--;
            back--;
        }
        cout<<mini<<" "<<maxi<<endl;
        
    }

    return 0;
}