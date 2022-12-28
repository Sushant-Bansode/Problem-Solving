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
   // Took 1st One Separately so as to include the last substring check.   
   if(CP == CT){ return true;}      
  for(int i = s1.length( ); i< s2.length( ); ++i){
  // Increasing the next one of the Window 
      CT[s2[i]]++;
 // Decreasing the Previous one of the Window     
   CT[s2[i-s1.length( )]]--;  
 // To Include the Last Substring Check.     
  if(CP == CT){
  return true;
  } 
 } 
   return false;        
  }
};