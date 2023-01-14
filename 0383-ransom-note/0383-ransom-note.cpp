class Solution {
public:
    bool canConstruct(string r, string m) {
 map<char,int>mp1, mp2;
        int count = 0;
        for(auto x: r){mp1[x]++;}
         for(auto x: m){mp2[x]++;}
  for(auto it = mp1.begin( ); it!= mp1.end( ); ++it){
      if(mp2.find(it->first) != mp2.end( ) && mp1[it->first] <= mp2[it->first]){
         count++;
      }
  }      return(count == mp1.size( ));
 
    }
};