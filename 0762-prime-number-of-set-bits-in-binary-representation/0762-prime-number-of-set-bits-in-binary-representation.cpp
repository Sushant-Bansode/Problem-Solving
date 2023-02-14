class Solution {
public:
  bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
} 
    
int countPrimeSetBits(int left, int right) {
    int count = 0;
    for(int i = left; i<= right; ++i){
        if(isPrime(__builtin_popcount(i))){
            count++;
        }
    }
  return count;  
    }
};