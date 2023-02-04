class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k < 0){
            return 0;
        }
      int ans = 0;
      map<int,int> mp;
 for(auto x: nums){mp[x]++;}
    for(auto x: mp){
    if(k == 0){
       if(x.second >=2){
        ans++;   
       } 
    }  
    else if(k > 0){
        if(mp.find(x.first + k) != mp.end( )){
        ans++;    
        }
      }      
    }
return ans;        
    }
};