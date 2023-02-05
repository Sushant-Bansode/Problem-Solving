class Solution {
public:
int balancedStringSplit(string s) {
    int total = 0;
    int ans = 0;
for(int i = 0; i< s.length( ); ++i){
    if(s[i] == 'L'){
        total++;
    }else{
        total--;
    }
  if(total == 0){
      ans++;
  }  
}      
  return ans;      
    }
};