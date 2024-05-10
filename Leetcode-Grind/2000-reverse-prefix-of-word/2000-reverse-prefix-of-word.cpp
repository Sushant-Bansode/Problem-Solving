class Solution {
public:
    string reversePrefix(string word, char ch) {
   string ans = word;
   int j = 0;   
    for(int i =0; i< word.length( ); ++i){
        if(word[i] == ch){
         j = i;   
        break;}
    }
        
   if(j > 0 && j < word.length( )){   
   int hi = j, lo = 0;     
   while(lo <= hi){
   swap(ans[lo++],ans[hi--]);   
   }
   return ans;    
   }
   else
   return ans;    
    }
};