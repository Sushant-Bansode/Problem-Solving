class Solution {
public:
int totalMoney(int n) {
  int x=n%7, y=n/7;
        
    return ( (28*y) + (7*(y*(y-1))/2) + ((x*(x+1))/2) + (x*y));
  }
};