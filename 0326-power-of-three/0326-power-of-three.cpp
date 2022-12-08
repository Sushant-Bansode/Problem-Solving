class Solution {
public:
  bool isPowerOfThree(int n) {
     double power = log10(n) / log10(3);
      double check = fmod(power,1);
       if (check == 0){
           return true;
       }
    else
        return false;
  }
};