class Solution {
public:
    
static bool comp(pair<int,int> p1, pair<int,int> p2){
if(p1.first == p2.first){
    return (p1.second > p2.second); 
}else{
    return (p1.first < p2.first);
}      
}    
vector<int> frequencySort(vector<int>& nums) {
  map<int,int> mp;
for(auto x: nums){mp[x]++;}
vector<pair<int,int>>v;
for(auto x: mp){
    v.push_back({x.second, x.first});
}    
sort(v.begin( ), v.end( ), comp);    
vector<int> ans;
for(int i = 0; i< v.size( ); ++i){
   while(v[i].first--){
     ans.push_back(v[i].second);   
   }  
}
return ans;    
    }
};