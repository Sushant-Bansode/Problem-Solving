class Solution {
public:
static bool mycomp(vector<int>b1, vector<int>b2){
   return b1[1] >= b2[1]; 
}    
    
    int maximumUnits(vector<vector<int>>& b, int truckSize) {
    int n = b.size( );
    sort(b.begin( ), b.end( ), mycomp);
    long long total = 0;
    int curr = 0;        
 for(int i = 0; i< n; ++i){
  if((truckSize - (b[i][0]+curr)) >= 0){
     total += b[i][0]*b[i][1];
     curr += b[i][0]; 
  }else{
     total += (truckSize - curr)*b[i][1];                            curr += (truckSize - curr); 
  }   
 }        
return total;        
    }
};