class Solution {
public:
int distinctIntegers(int n) {
    long long count = 1;
     if(n > 2){
    count += (n-2);          
     } 
  return count;     
    }
};