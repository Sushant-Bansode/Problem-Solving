#include<bits/stdc++.h>
using namespace std;

int main ( ){
int t;
cin >> t ;
while( t-- ){
int c,n;
cin >> n >> c;
int arr[n];
for(int i = 0; i < n; ++i)
cin >> arr[i];

int cost = 0;
map <int, int> mp;
for(int i = 0; i < n; ++i)
mp[arr[i]]++;

for(auto &x : mp)
 cost = cost + min(x.second, c);   

cout << cost << endl;
}
return 0;
}
