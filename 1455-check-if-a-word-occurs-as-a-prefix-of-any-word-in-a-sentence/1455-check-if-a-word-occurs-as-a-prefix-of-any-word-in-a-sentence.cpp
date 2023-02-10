class Solution {
public:
bool fact(string t,string s){
     for(int i=0;i<s.size();i++){
         if(s[i]!=t[i]){
             return 0;
         }
     }
    return 1;
}
int isPrefixOfWord(string s, string sw) {
 vector<string>v;
 string ans = ""; 
for(int i = 0; i< s.length( ); ++i){
 if(s[i] == ' '){
   v.push_back(ans);
   ans = "";  
 }else{
   ans += s[i];  
 }   
}    
v.push_back(ans);
    
for(int i = 0; i< v.size( ); ++i){
  if(fact(v[i], sw) == 1){
      return i+1;
  }
 }     
return -1;    
  }
};