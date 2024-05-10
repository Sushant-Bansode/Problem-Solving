#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin >> t;
while(t--){
int m;
cin >> m;
string arr[3][m];
for(int i = 0; i < 3; ++i){
 for(int j = 0; j< m ; ++j)
  cin >> arr[i][j];
}
map<string, int> mp;
for(int i = 0; i < 3; ++i){
 for(int j = 0; j< m ; ++j)
  mp[arr[i][j]]++;
}

int count1 = 0, count2 = 0, count3 = 0;

 for(int j = 0; j< m ; ++j){
 if(mp[arr[0][j]] == 1)
 count1 +=3;
 else if(mp[arr[0][j]] == 2)
 count1++;
 }
    
 for(int j = 0; j< m ; ++j){
 if(mp[arr[1][j]] == 1)
 count2 +=3;
 else if(mp[arr[1][j]] == 2)
 count2++;
 }

 for(int j = 0; j< m ; ++j){
 if(mp[arr[2][j]] == 1)
 count3 +=3;
 else if(mp[arr[2][j]] == 2)
 count3++;
 }

cout << count1 << " " << count2 << " " << count3 << endl;
}
return 0;
}

