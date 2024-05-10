class Solution {
public:
bool fact(string t,string s){
     for(int i=0;i<s.size();i++){
         if(s[i]!=t[i]){
             return 0;
         }
     }
    return 1;
}   

int prefixCount(vector<string>& v, string p) {
int count = 0;    
for(int i = 0; i< v.size( ); ++i){
  if(fact(v[i], p) == 1){
      count++;
  }
 }     
return count;    
    }
};

