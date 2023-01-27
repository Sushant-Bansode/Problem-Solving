class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
 unordered_map<char,int> mp1, mp2;
  for(auto x : jewels){mp1[x]++;}
  for(auto x : stones){mp2[x]++;}
 int count = 0;       
  for(auto it = mp2.begin( ); it != mp2.end( ); ++it){
  if(mp1[it->first] >= 1){
   count += it-> second;   
  }     
 }
return count;        
    }
};