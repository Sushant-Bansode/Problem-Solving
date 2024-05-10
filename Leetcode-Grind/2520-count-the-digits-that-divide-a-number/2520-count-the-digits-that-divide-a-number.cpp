class Solution {
public:
    int countDigits(int num) {
      vector<int> digs;
    int n = num;
    while(n > 0){
         digs.push_back(n % 10);
         n /= 10;
     }
        int count = 0;
   for(auto x: digs){
       if(x != 0 && num % x == 0) {
         count++;  
       }
   }
return count;        
    }
};