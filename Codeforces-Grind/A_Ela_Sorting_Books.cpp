#include<bits/stdc++.h>
using namespace std;

char MEX (string &s)
{
 int visited[26];
 for (int i = 0; i< s.size( ); ++i)   
 visited[i] = 0;

 for (int i = 0; i< s.size( ); ++i)
  visited[s[i] - 'a']++;
 
 for (int  i = 0; i <s.size ( ); ++i)
      if (s[i] == 0)
      return s[i]; 

 return 'a';
}
 
string formSet( string &s, int n, int k){
 string formed; int part = n/k; int count = 0;    
while (part-- && count >=0 && count <= n/k){
 for(int i = 0; i < s.size(); ++i){
  if((s[i] != s[i+1])){
    count+=1;
    formed.push_back(s[i]);
    s.erase(i, 2);  
    }
 }
  }
 return formed;
}

int main( ){
int t;
while(t--){
int n,k;
cin >> n >> k;
string s;
cin >> s;
string s2 = s;
 sort(s2.begin(),s2.end());
 int k1 = k;
 string ans = "";
 while (k1--){   
 string temp = formSet(s2,n,k);
 ans.push_back(MEX(temp)); 
 }
 cout << ans << endl;  
}
return 0;
}