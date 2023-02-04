class Solution {
public:
bool hasGroupsSizeX(vector<int>& deck) {
    map<int,int> mp;
    for(auto x: deck){mp[x]++;}
    
 vector<int> freq;
 for(auto x: mp){freq.push_back(x.second);}
 int gcd_val = freq[0];
 for(auto x: freq){
      gcd_val = __gcd(gcd_val, x);
 }        
  
 if(gcd_val > 1){
     return true;
 }else{
     return false;
 }       
        
   }
};

  