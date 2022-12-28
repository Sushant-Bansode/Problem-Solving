class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         if(s2.length( )< s1.length( )){
            return false;
        }
        // Trying to do the most optimised solution using sliding window...
  vector<int>CT(256,0);
   vector<int>CP(256,0);  
      // Getting 1st Substring and the Start of the window.
        for(int i = 0; i<s1.length( ); ++i){
          CT[s2[i]]++;
          CP[s1[i]]++;
    }
   if(CP == CT){ return true;}      
  for(int i = s1.length( ); i< s2.length( ); ++i){
   CT[s2[i]]++;
   CT[s2[i-s1.length( )]]--;   
  if(CP == CT){
  return true;
  } 
 } 
   return false;        
  }
};