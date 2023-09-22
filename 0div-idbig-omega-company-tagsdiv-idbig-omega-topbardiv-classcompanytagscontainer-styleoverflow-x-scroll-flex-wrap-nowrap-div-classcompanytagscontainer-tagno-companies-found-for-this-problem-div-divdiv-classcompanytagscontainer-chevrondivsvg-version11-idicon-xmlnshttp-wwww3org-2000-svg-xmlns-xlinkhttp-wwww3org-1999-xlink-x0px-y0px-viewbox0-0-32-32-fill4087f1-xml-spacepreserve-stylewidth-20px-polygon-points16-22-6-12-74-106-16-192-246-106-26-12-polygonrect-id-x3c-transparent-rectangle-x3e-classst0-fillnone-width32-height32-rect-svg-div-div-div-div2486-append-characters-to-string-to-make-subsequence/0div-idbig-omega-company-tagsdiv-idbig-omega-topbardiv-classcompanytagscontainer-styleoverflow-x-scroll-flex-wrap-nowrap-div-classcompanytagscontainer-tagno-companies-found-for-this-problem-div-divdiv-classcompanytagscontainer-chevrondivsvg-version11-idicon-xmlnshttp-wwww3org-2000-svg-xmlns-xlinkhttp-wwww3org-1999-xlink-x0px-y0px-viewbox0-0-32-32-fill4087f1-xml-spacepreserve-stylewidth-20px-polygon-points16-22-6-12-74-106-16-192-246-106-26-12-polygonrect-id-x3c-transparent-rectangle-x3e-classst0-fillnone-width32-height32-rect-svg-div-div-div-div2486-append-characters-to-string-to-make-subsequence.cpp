class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.length()){
            if(t[j]==s[i])  j++;
             i++;
        }
        return t.length()-j;
    }
};