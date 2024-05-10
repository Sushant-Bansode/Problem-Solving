class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      map<int,int> mp;
   for(auto x: arr){mp[x]++;}
  if(mp[0] > 1){return true;}
   for(auto x: arr){
       if(mp[x] != 0 && mp[2*x] != 0 && x != 0){
           return true;
       }
   } 
 return false;       
   }
};