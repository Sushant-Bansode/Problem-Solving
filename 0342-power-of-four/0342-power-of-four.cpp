class Solution {
public:
    bool isPowerOfFour(int n) {
      double power = log10(n) / log10(4);
      double check = fmod(power,1);
       if (check == 0){
           return true;
       }
    else
        return false;
  }   
    
};