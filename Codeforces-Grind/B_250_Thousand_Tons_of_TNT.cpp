#include<bits/stdc++.h>
using namespace std;

int main( ){
  int t;
  cin >> t; 
  while(t--){
    int n; 
    cin >> n;
    
    vector<int> arr (n,0);
    for(int i = 0; i< n ; ++i){
        cin >> arr[i];
    }
     
    vector<int> arrk;
     for(int i = 1; i <= n; ++i) {
        if(n % i == 0)
          arrk.push_back(i);
    }
    
    long long ans =  LONG_LONG_MIN;
     
    for(int i = 0; i< arrk.size( ); ++i){
        int k = arrk[i];
        long long mine = LONG_LONG_MAX;
        long long maxe = LONG_LONG_MIN;
        for(int i = 0; i< n ; i += k){
            long long sum = 0;
            for(int j = 0; j < k; ++j){
                sum += arr[i+j]; 
            }
            mine = min(mine, sum);
            maxe = max(maxe, sum);
        }
        long long temp = maxe - mine;
       ans = max(ans, temp); 
    }

    cout << ans << endl;
    }
 
   
   }


