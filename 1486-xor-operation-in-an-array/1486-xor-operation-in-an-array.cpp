class Solution {
public:
    int xorOperation(int n, int start) {
     int ans = 0;
        while(n--){
         ans = ans^start;
           start+=2; 
     }
   return ans;     
    }
};