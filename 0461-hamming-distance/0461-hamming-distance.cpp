class Solution {
public:
    int hammingDistance(int x, int y) {
       int temp = x^y;
  int ct1 = 0;       
 for(int i = 31; i>=0; i--){
     if((temp &(1 <<i)) != 0){
         ct1++;
     }
 }
 return abs(ct1 );       
    }
};

 