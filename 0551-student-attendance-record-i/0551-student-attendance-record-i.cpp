class Solution {
public:
    bool checkRecord(string s) {
    int a = 0,lcount = INT_MIN;
     for(int i = 0; i<s.length( ); ++i){
         if(s[i] == 'A'){
             a++;
         }
     }
      for(int i = 0; i<s.length( ); ++i){
          int l = 0;
         if(s[i] == 'L'){
           while(s[i] == 'L'){
               l++;
               i++;
           }
           lcount = max(lcount, l);  
         }
     }
   if(a<2 && lcount<3){
       return true;
   }else{
       return false;
   }     
    }
};