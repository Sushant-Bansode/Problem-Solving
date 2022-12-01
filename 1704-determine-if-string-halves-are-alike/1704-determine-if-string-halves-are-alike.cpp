class Solution {
public:
    bool ISvowel(char x){
    if(x =='a' ||x =='e'||x =='i' ||x =='o'||x =='u'||x =='A' ||x =='E'||x =='I'||x =='O'||x =='U')    
    return true;
    else
    return false;    
    }
    
    bool halvesAreAlike(string s) {
    int s1 = s.length( )/2;
    int count1 = 0, count2 = 0;    
  for(int i = 0; i<s1; i++){
      if(ISvowel(s[i]))
       count1++;   
  }      
  
  for(int i = s1; i<s.length( ); i++){
      if(ISvowel(s[i]))
       count2++;   
  }        
   
  return(count1 == count2);      
    }
};