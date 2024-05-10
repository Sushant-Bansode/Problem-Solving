#include<bits/stdc++.h>
using namespace std;

void solve( ){
    int n, x;
    cin >> n >> x;
    vector<int> vec(n+1,0);
    for(int i = 1; i< n+1 ; ++i){
        cin >> vec[i];
    }
    vec.push_back(x);
    int ans = INT_MIN;
     
    for(int i = 1; i< n+1; ++i){
        ans = max(ans, abs(vec[i]-vec[i-1]));
    }
    int last = 2*(vec[n+1]-vec[n]);
    ans = max(ans, last);
    cout << ans << endl; 
}

int main( ){
  int t;
  cin >> t;
  while(t--){
    solve( );
  }
}

// 0 1 2 5 7
// 0 1 2 5 6
// 0 7 10