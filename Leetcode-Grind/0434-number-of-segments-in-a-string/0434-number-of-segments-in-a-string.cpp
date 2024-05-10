class Solution {
public:
int countSegments(string s) {
  int count = 0;
   string temp = "";
    for(int i = 0; i< s.length( ); ++i){
        if(s[i] == ' ' && temp.length( ) > 0){
         temp = "";
         count++;   
        }else if(s[i] != ' '){
         temp += s[i];   
        } 
      }
   if(temp.length( ) > 0){
      count++; 
   }   
   return count;
    }
};