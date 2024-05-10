class Solution {
public:
    bool isPrime(int n){
        for(int i = 2; i*i<=n;i++){
            if(n%i == 0){
                return false;
            }
        }
     return true;   
    }
    
    bool isThree(int n) {
        if(n == 1){
            return false;
        }
      for(int i = 1; i*i<=n;++i){
          if(i*i == n && isPrime(i)){
              return true;
          }
      }
    return false;    
    }
};