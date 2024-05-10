class Solution {
public:
   static bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second > b.second);
}
    string frequencySort(string s) { 
     map<char,int> mp;
     for(auto x: s)
       mp[x]++;  
   vector<pair<char,int>>ans; 
     for(auto it = mp.begin( ); it != mp.end( ); ++it){
      ans.push_back(make_pair(it->first,it->second));   
     }   
    sort(ans.begin( ), ans.end( ), sortbysec);
     string answer = "";   
  for(int i = 0; i< ans.size( ); ++i){
   while(ans[i].second--){
     answer += ans[i].first;
   }    
  }      
 return answer;       
    }
};