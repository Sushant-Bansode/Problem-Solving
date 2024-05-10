#include<bits/stdc++.h>
using namespace std;

 bool dura(pair<string,pair<int,int>> &a,pair<string,pair<int,int>>&b)
{
    if(a.second.first!=b.second.first)
     return (a.second.first < b.second.first);
     else
     return (a.second.second < b.second.second);

}
bool uniq(pair<string,pair<int,int>> &x,pair<string,pair<int,int>>&y)
{
    if(x.first!=y.first)
     return (x.first < y.first);
     else
      return (x.second.second < y.second.second);

}

int main( ){
    int t;
    cin >> t;
    for(int i = 1; i <=t; ++i){
     int n;
     cin >> n;
 
     vector<pair<string,pair<int,int>>> v1(n);
      for(int i = 0 ; i < n; ++i){
      cin >> v1[i].first >>  (v1[i].second).first >>  (v1[i].second).second; 
      }  
      
    vector<pair<string,pair<int,int>>> v2 = v1; 
       
     sort(v1.begin( ), v1.end( ),uniq);
     sort(v2.begin( ), v2.end( ), dura);
      int count = 0;

      for(int i = 0 ; i < n; ++i){
       if(v1[i] == v2[i])
       count++;
      }  
        
      cout<<"Case #"<<i <<": "<< count <<endl;  
        
        
    }
    
}