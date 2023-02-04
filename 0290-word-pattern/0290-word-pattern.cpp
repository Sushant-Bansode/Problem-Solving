class Solution {
public:
    
    bool wordPattern(string pattern, string s) {
    int p = pattern.length( ); 
    int n = s.length( );    
    vector<string> res;
    string ans = "";
    for(int i = 0; i< n; ++i){
        if(s[i] != ' '){
            ans += s[i];
        }else{
         res.push_back(ans);   
            ans = "";
        }
    }
   res.push_back(ans);      
if(pattern.length( ) != res.size( )){
      return false;
 }           
 
vector<pair<char, string>> vec1;
vector<pair<string, char>> vec2;    
    for(int i = 0; i < res.size( ); i++){
     vec1.push_back({pattern[i], res[i]});   
     vec2.push_back({res[i], pattern[i]});   
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