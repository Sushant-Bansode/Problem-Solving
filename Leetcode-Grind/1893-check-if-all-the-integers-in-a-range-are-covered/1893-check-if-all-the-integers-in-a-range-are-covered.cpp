class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
     map<int,int> mp;
     for(int i = 0; i< ranges.size( ); ++i){
         for(int j = ranges[i][0]; j<= ranges[i][1]; ++j){
             mp[j]++;
         }
     }
  for(int i = left; i <= right; ++i){
      if(mp.find(i) == mp.end( )){
          return false;
      }
  }      
  return true;      
    }
};