class Solution {
public:
    int gcd(int a,int b){
    if (a == 0)
        return b;
    return gcd(b%a,a);
    }
    
    int smallestEvenMultiple(int n) {
      int hcf = gcd(n,2);
      int lcm = (n*2)/hcf;   
    return lcm;
    }
};