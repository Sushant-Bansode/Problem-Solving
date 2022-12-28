class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length( )<p.length( )){
            return { };
        }
        // Trying to do the most optimised solution using sliding window...
   vector<int>ans;     
  vector<int>CT(256,0);
   vector<int>CP(256,0);  
      // Getting 1st Substring and the Start of the window.
        for(int i = 0; i<p.length( ); ++i){
          CT[s[i]]++;
          CP[p[i]]++;
      }
  if(CP == CT){ ans.push_back(0);}       
  for(int i = p.length( ); i< s.length( ); ++i){
   CT[s[i]]++;
   CT[s[i-p.length( )]]--;   
   if(CP == CT){
          ans.push_back(i-p.length( )+1);
   }
 } 
   return ans;     
    }
};