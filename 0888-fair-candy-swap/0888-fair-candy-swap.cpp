class Solution {
public:
vector<int> fairCandySwap(vector<int>& a, vector<int>& b) {
      int bobsum = 0, alicesum = 0;
      for(auto x: a){alicesum += x;}
      for(auto x: b){bobsum += x;}  
      int req = (alicesum + bobsum)/2;  
map<int,int> mp;      
  for(auto x: b){mp[x]++;}
  
  for(int i = 0; i< a.size( ); ++i){
      int other = req - (alicesum - a[i]);
      if(other && mp.count(other)){
          return {a[i],other};
      }
  }  
return {0,0};        
    }
};