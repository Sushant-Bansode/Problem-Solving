class Solution {
public:
vector<int> findDisappearedNumbers(vector<int>& nums) {
  int n = nums.size( );
  map<int,int> mp;
 for(auto x: nums){mp[x]++;}
 vector<int> ans;
 for(int i = 1; i<= n; ++i){
    if(mp.find(i) == mp.end( )){
     ans.push_back(i);
    }
 }
return ans;        
    }
};