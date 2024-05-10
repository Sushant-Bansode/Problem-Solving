class Solution {
public:
int maxScore(vector<int>& cp, int k) {
       int sum  = 0, overall = 0; 
       int n = cp.size( ); 
    
    for(auto x: cp){overall += x;} 
    for(int i = 0; i< n-k; ++i){sum += cp[i];}
      int minsum = sum;
        
    for(int i = n-k; i < n; i++){
      sum -= cp[i - (n-k)];
      sum += cp[i];
      minsum = min(minsum, sum);  
    }
return (overall - minsum);     
    }
};