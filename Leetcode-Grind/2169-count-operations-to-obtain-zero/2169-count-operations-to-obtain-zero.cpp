class Solution {
public:
    int countOperations(int n1, int n2) {
      long long count = 0;
     while(n1 != 0 && n2 != 0){
         if(n1 >= n2){
             n1 = n1 - n2;
             count++;
         }else if(n2 > n1){
             n2 = n2 - n1;  
             count++;
         }
     }   
   return count;     
    }
};