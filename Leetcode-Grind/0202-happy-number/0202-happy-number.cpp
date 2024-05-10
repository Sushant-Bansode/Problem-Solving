class Solution {
public:
int sqdigit(int &n){
int sum = 0;
    while(n > 0){    
int digit = n % 10;
 sum += digit*digit; 
 n = n/10;
}  
 return sum;    
}

bool isHappy(int n){
  if(n > 1 && n <=6 || n== 8 || n== 9){
            return false; }
      if(n == 1 || n ==7 )
        return true;   
    
    while(n >= 9){
      n = sqdigit(n);
      if(n > 1 && n <=6 || n== 8 || n== 9){
            return false; }
      if(n == 1 || n ==7 )
        return true;   
    }
return true;    
} 
};