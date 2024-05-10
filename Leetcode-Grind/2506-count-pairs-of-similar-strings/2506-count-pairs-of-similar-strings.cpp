class Solution {
public:
    int similarPairs(vector<string>& words) {
      vector<set<char>> s;
      for(auto x: words){
         set<char> s1;   
          for(auto k: x){
              s1.insert(k);
          }
       s.push_back(s1);   
      }
     int count = 0;   
     for(int i = 0; i< s.size( ); ++i){
         for(int j = i+1; j < s.size( ); ++j){
            if(s[i] == s[j]){
            count++;    
            } 
         }
     }
  return count;
        
    }
};