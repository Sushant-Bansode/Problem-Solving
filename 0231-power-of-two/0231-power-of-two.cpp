class Solution {
public:
    bool isPowerOfTwo(int n) {
       // int x ;
       for(int i = 0; i<= log2(n); ++i){
        if(1<<i == n){
         return true;   
        }     
       }
    return false;   
    }
};