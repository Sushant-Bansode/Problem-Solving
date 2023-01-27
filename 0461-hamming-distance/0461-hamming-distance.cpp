class Solution {
public:
    int hammingDistance(int x, int y) {
       int temp = x^y;
  int ct1 = __builtin_popcount(temp);
 return ct1;       
    }
};

 