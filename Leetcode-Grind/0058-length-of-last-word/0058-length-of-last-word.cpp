class Solution {
public:
    int lengthOfLastWord(string s) {
    int index = s.length( ) - 1;    
    while(index > 0){
    if(s[index] != ' '){
        break;
    }    
    index--;    
    }
    int count = 0;
    while(index >= 0){
    if(s[index]==' '){
     break; }    
    count++;
    index--;
    }
 return count;
    }
};