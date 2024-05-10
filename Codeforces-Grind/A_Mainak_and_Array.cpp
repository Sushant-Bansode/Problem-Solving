#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
int n;
cin >> n;   
vector<int> v(n);
for(int i = 0; i< n ; i++){
  cin >> v[i];  
}

int ans = 0;

for(int i = 0; i< n -1; i++){
  ans = max(ans, v[i] - v[i+1]);
}

for(int i = 0; i< n-1 ; i++){
  ans = max(ans, v[n-1] - v[i]);
}

for(int i = 0; i< n ; i++){
  ans = max(ans, v[i] - v[0]); 
}

cout << ans << endl;

}
}


