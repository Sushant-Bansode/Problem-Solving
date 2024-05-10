class Solution {
public:
    bool isUgly(int n) {
     if(n == 0)
     return false;
     if(n == 1)
     return true;    
     int count2 = 0, count3 = 0, count5 = 0;
       int temp = n; 
      while(n % 2 == 0 || n % 3 == 0 || n % 5 == 0){
      if(n % 2 == 0){
         count2++;
        n /=2;  
      }
       
       if(n % 3 == 0){
          count3++;
        n /=3;  
      }
      
        if(n % 5 == 0){
          count5++;
        n /=5;  
      }
    if(n == 1)
        return true;
          
      } 
        
  if(temp == pow(2,count2)*pow(3,count3)*pow(5,count5))      
  return true;
  else
  return false;    
    }
};