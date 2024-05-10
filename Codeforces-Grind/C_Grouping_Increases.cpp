#include <bits/stdc++.h>
using namespace std;

void sushant( ){
      int n;
      cin >> n;
      int temp1 = 1e9, temp2 = 1e9, ans = 0;
      vector<int> vec(n);
      for(int i = 0; i < n; ++i){
        cin >> vec[i];
      }

      for(int i = 0; i< n; ++i){
         if(vec[i] <= temp1){
            temp1 = vec[i];
        }else if(vec[i] <= temp2){
            temp2 = vec[i];
        }else{
            ans++;
            temp1 = vec[i];
        }
        if(temp1 > temp2){
            swap(temp1,temp2);
        }
      }
   cout << ans << endl;      
}

int main() {
    int t;
    cin >> t;

    while (t--) {
      sushant( );
    }

    return 0;
}
