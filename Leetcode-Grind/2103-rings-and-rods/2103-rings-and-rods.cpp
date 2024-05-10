class Solution {
public:
    int countPoints(string s) {
    set<int> mr;
    set<int> mg;
     set<int> mb;    
        
      for(int i = 0; i< s.size( )-1; i+=2){
       if(s[i] == 'R'){
           mr.insert(s[i+1] - '0');
       }else if(s[i] == 'G'){
           mg.insert(s[i+1] - '0');
       }else if(s[i] == 'B'){
           mb.insert(s[i+1] - '0');
       }   
      }
 map<int,int> mp;
int count = 0;        
  for(auto x: mr){mp[x]++;}
  for(auto x: mb){mp[x]++;}
  for(auto x: mg){mp[x]++;}       
 for(auto x: mp){
     if(x.second == 3){
        count++;
     }
 }
        
return count;        
    }
};