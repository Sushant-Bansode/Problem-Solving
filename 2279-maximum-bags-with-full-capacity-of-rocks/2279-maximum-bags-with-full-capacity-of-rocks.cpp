class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> diff;
   for(int i = 0; i< capacity.size( ); ++i){
       int x = capacity[i] - rocks[i];
     diff.push_back(x);
   }     
   sort(diff.begin( ), diff.end( ));
  int count  = 0;   
  int curr = 0;
   for(auto x : diff){
    if((additionalRocks-(curr+x)) >= 0){
     count++;    
     curr += x;
    }   
   }     
return count;        
    }
};