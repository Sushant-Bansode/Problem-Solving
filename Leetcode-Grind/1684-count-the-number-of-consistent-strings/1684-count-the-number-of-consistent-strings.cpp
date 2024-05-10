class Solution {
public:
int countConsistentStrings(string allowed, vector<string>& words) {
    vector<set<char>> s;
     for(auto x: words){
         set<char> s1;   
          for(auto k: x){
              s1.insert(k);
          }
       s.push_back(s1);   
      }
    set<char> s1;
    for(auto x: allowed){
      s1.insert(x);  
    }
    int count = 0;    
     for(int i = 0; i< s.size( ); ++i){
            if(s[i] == s1){
            count++;    
            }else{
              int k= 0;  
            for(auto x: s[i]){
              if(s1.count(x) == 1){
                  k++;
              }           
             } 
            if(k == s[i].size()){
                count++;
            }
           } 
    }
  return count; 
    }
};