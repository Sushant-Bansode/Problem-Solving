class Solution {
public:
string bestHand(vector<int>& ranks, vector<char>& suits) {
    map<int, int> mp;
for(auto s: suits){
        mp[s]++;
}
for(auto m: mp){
  if(m.second == 5){
        return "Flush";
     }
}
mp.clear();
for(auto r: ranks) {
    mp[r]++;
}
for(auto m: mp){
  if(m.second >= 3) {
    return "Three of a Kind";
   }
}    
for(auto m: mp){
  if(m.second >= 2) {
    return "Pair";
    }
}       
    return "High Card";  
    }
};