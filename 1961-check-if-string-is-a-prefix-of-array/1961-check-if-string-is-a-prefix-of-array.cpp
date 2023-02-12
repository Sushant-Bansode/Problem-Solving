class Solution {
public:
bool isPrefixString(string s, vector<string>& words) {
  string pre;
  for(int i=0; i<words.size(); i++){
              pre +=words[i];
           if(pre == s){
               return true ;
           }
   }
    
return false;    
   }
};