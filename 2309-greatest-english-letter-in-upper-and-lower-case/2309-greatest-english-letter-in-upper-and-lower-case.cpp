class Solution {
public:
string greatestLetter(string s) {
  string lower, upper;
     for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z')
                lower+=s[i];
                else
                upper+=s[i];
        }
transform(lower.begin(), lower.end(), lower.begin(), ::toupper);
string ans = "";
sort(lower.begin( ), lower.end( ));  
map<char,int>mp;    
for(auto x: upper){mp[x]++;}  
 for(int i = lower.size( )-1; i >=0; i--){
   auto it = mp.find(lower[i]);
   if(mp.find(lower[i]) != mp.end( )){
    ans += lower[i];  
    break;   
   }  
 }  
return ans;  
 }  
};