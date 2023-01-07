class Solution {
public:
    double myPow(double x, int n) {     
double ans = 1.000;
long long nn = abs(n);        
    while(nn > 0){
        if(nn &1){
        ans = ans*x;
       nn = nn - 1;
    }
      x = x*x;
    nn = nn>>1;    
}
        
if(n > 0)
   return ans;               
else
   return 1.00000/ans;  
        
}
};