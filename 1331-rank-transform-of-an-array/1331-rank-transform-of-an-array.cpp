class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
     map<int,int> mp;
        for(auto x: arr){mp[x]++;}
     vector<int> ans,temp;
        int rank = 0;
   for(auto it = mp.begin( ); it != mp.end( ); it++){
       rank++;
      it-> second = rank; 
   } 
        
    for(int i = 0; i<arr.size( ); i++){
        ans.push_back(mp[arr[i]]);
    }
    return ans;    
    } 
};