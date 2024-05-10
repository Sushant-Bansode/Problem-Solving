
#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin >> t;
 while(t--){
 int n;
 cin >> n;
 vector<int>v1(n);
 vector<int>v2(n);
  map<int,int>mp1;
  map<int,int>mp2;
 for(int i = 0; i<n;++i){
 cin >> v1[i];
  mp1[v1[i]]++;
 }
 for(int i = 0; i<n;++i){
 cin >> v2[i];
  mp2[v2[i]]++;
 }
 int pos = 0;
 // Positions Driven Basic Code.
 for(int i = 0; i<n;++i){
 if(v2[i]!=v1[i])
 pos++;
 } 
 // Frequency Driven Basic Code.
 int a = abs(mp1[1]-mp2[1]);
 int b = abs(mp1[0]-mp2[0]);
 int ans = min(a,b);  

 cout << min(ans + 1, pos) << endl;

 }
	return 0;
}
