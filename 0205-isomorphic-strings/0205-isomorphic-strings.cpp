class Solution {
public:
 bool isIsomorphic(string s, string t) {       
if(s.length( ) != t.length( )){
      return false;
 }           
     
vector<pair<char, char>> vec1;
vector<pair<char, char>> vec2;    
    for(int i = 0; i < s.size( ); i++){
     vec1.push_back({s[i], t[i]});   
     vec2.push_back({t[i], s[i]});   
   }    
  sort(vec1.begin( ), vec1.end( ));
  sort(vec2.begin( ), vec2.end( ));      
for(int i = 0 ; i< vec1.size( )-1; i++){   
 if(vec1[i].first == vec1[i+1].first && vec1[i].second != vec1[i+1].second){
   return false;       
   } 
 }
for(int i = 0 ; i< vec2.size( )-1; i++){
 if(vec2[i].first == vec2[i+1].first && vec2[i].second != vec2[i+1].second){
   return false;       
  }
} 
     
return true;        
    }
};