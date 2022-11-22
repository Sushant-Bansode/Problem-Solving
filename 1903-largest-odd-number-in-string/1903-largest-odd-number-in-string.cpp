class Solution {
public:
    string largestOddNumber(string num) {
     string ans;
     int j = -1;
      for(int i = num.size( )-1; i>=0; --i){
          if(num[i]%2 != 0){
            j = i;
            break;  
          }
      }   
   if(j == -1)
   return "";
   else{
   for(int i = 0; i<=j; ++i)    
   ans += num[i];
       
   return ans;    
   }     
        
        
    }
};