class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
      vector<string> v1, v2, res; 
      string ans = "";  
     for(int i = 0; i< s1.length( ); ++i){
       if(s1[i] == ' '){
          v1.push_back(ans);
          ans = ""; 
       }else{
           ans += s1[i];
       }  
     }   
     v1.push_back(ans); 
     ans = "";  
     for(int i = 0; i< s2.length( ); ++i){
       if(s2[i] == ' '){
          v2.push_back(ans);
          ans = ""; 
       }else{
           ans += s2[i];
       }  
     }   
     v2.push_back(ans);         
  map<string, int> mp1;
  map<string, int> mp2;
for(auto x: v1){mp1[x]++;}
for(auto x: v2){mp2[x]++;} 
  for(auto x: mp1){ 
    if(x.second == 1 && mp2[x.first] == 0){
        res.push_back(x.first);
    }
  }             
   for(auto x: mp2){ 
    if(x.second == 1 && mp1[x.first] == 0){
        res.push_back(x.first);
    }
  }       
return res;                
    }
};