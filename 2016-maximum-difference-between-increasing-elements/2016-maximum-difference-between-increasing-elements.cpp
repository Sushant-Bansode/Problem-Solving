class Solution {
public:
    int maximumDifference(vector<int>& prices) {
    vector<int> maxsuff;
    int maxs = prices[prices.size( )-1];
      maxsuff.push_back(maxs);  
    for(int i = prices.size( )-1; i>=0; i--){
         if(prices[i] > maxs){
             maxs = prices[i];
         }
      maxsuff.push_back(maxs);  
     }
   reverse(maxsuff.begin(), maxsuff.end( ));     
    int res = INT_MIN;
   for(int i = 0; i< prices.size( ); i++){    
       res = max(res, maxsuff[i]- prices[i]); 
   } 
        
 if(res == 0){
   return -1;  
 }else{
 return res;  
 }                 
    }
};