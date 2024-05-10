class Solution {
public:
    char findTheDifference(string s, string t) {
        int x = 0;
        for(int i = 0; i<t.length( ); ++i){
          x = (t[i]-'a')^x;     
        }
         for(int i = 0; i<s.length( ); ++i){
          x = (s[i]-'a')^x;     
        }
    return (char)x + 'a';
    }
};