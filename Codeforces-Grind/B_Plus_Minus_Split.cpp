#include <bits/stdc++.h>
using namespace std;

void sushant( ){
      int n;
      cin >> n;
      string s;
      cin >> s;
    int sum  = 0;
    for(int i = 0; i< s.length( ); ++i){
        if(s[i] == '+'){
            sum += 1;
        }else{
            sum += -1;
        }
    }

cout << abs(sum) << endl;

      
}

int main() {
    int t;
    cin >> t;

    while (t--) {
      sushant( );
    }

    return 0;
}
