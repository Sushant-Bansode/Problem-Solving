class Solution {
public:
    bool isCapital(char x){
        if(x>= 65 && x<=90){
            return true;
        }else{
            return false;
        }
    }
    
    bool detectCapitalUse(string s) {
     int n = s.size( );
     int count = 0;
    for(int i = 0; i<n; ++i){
      if(isCapital(s[i])){
       count++;   
      }   
     }    
   if(count == 0){
       return true;
   }else if(count == n){
       return true;
   }else if(count == 1 && isCapital(s[0])){
       return true;
   }else{
       return false;
   }     
    }
};