class Solution {
public:
      string reverseOnlyLetters(string s) {
        string s2  = "";
        for(int i =0; i<s.length();i++){
            char c = s[i];
            if(c >= 'a' && c <= 'z'){
                s2.push_back(c);
            }
            if(c >= 'A' && c <= 'Z'){
                s2.push_back(c);
            }
        }
        reverse(s2.begin(),s2.end());
        int j = 0;
        for(int i = 0; i<s.length();i++){
            char c = s[i];
            if(c >= 'a' && c <= 'z'){
              s[i] =   s2[j];
              j++;
            }
            if(c >= 'A' && c <= 'Z'){
                 s[i] =   s2[j];
              j++;
            }
        }
        return s;
    }    
};