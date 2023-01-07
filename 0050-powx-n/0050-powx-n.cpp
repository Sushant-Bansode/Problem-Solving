class Solution {
public:
    double myPow(double x, int n) {     
double p = 1.0000;
long long nn = abs(n);        
    while(nn > 0){
        if(nn &1){
            p = p*x;
          nn = nn-1;  
        }
      x = x*x;
    nn = nn>>1;    
}
        
if(n > 0)
   return p;               
else
   return 1.00000/p;  
        
}
};