class Solution {
public:
int arrangeCoins(int n) {
  int k = 0;
    while(n>=0){ //Checking the Condition
            k++;     //if true then increase pointer
            n-=k;
        }
     return k-1;  
    }
};