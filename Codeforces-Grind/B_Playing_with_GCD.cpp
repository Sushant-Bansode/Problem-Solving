
#include <bits/stdc++.h>
using namespace std;
int main() {
 int t;
 cin >> t;
 while(t--){
 int n;
 cin >> n;
 vector<int>v1(n);
 for(int i = 0; i< n ;++i){
 cin >> v1[i];
 }
 bool flag = true;
 for(int i = 0; i< n-2;++i){
 if(__gcd(v1[i],v1[i+2]) > __gcd(v1[i],v1[i+1]) )
   cout <<"NO" << endl; flag = false; break;
 }
 
 if(flag == true)
 cout << "YES" << endl;


 }
	return 0;
}
