class Solution {
public:
 static bool isvowel(char c){
     if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
         return true;
     }
 return false;    
 }   
    int maxVowels(string s, int k) {
       int start = 0;
// Initialising with No of vowels in the 1st Window of size K.
for(int i =0; i<k ;i++){
  if(isvowel(s[i]))
    start++;
}
// Typical Sliding Window For the Sake of the maximum of vowels in a Window of Size K.        
// window variable
int temp = start;
for(int i =0, j = k; j< s.length( ); i++, j++ ){
 // i it is the Starting index of the sliding window.
 // j it is the ending index of the sliding window.
 // if the Previous 1st starting index of the window was vowel , then do temp-- or Else if the New upcoming to be added end index is, vowel then add in temp.  
            if(isvowel(s[i])){
                temp--;  
            }
            if(isvowel(s[j])){
                temp++;   
            }
// Simultaneously Keep Calculating the maximum count of the vowel as Every Window Proceeds via adding the next and subtracting the lasr one.            
            start = max(start,temp);
    }    
        return start;                
    }
};