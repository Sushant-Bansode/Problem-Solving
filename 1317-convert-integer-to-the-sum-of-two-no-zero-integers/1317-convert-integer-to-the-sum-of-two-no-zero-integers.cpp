class Solution {
public:
bool check0(int n){    
   bool flag = false;  
    while(n > 0){
    if(n % 10 == 0){
        flag = true;
        return flag;
      } 
        n /= 10;
    }
  return flag;
} 
   
vector<int> getNoZeroIntegers(int n) {
  for(int i = 1; i<= n/2 ; ++i){
      if(!check0(i) && !check0(n-i)){
        return {i, n-i};  
      }
  }   
return {1, n-1}; 
  }
};