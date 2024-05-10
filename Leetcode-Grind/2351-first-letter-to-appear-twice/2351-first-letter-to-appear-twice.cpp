class Solution {
public:
    char repeatedCharacter(string s) {
    int count[256] = {0}; 

for(int i = 0; i< s.length( ); ++i){
    if(count[s[i]] == 1){
        return s[i]; 
        }
 count[s[i]]++;     
 }
    
  return 0;    
    }
};