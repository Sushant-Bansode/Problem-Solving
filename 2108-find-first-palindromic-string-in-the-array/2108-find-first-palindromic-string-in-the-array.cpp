class Solution {
public:
    bool isPalindrome(string s){
        for(int i = 0; i<s.length( )/2; ++i){
            if(s[i]!= s[s.length( )-1-i]){
                return false;
            }
        }
     return true;   
    }
    
    string firstPalindrome(vector<string>& words) {
        string ans = "";
        int n = words.size( );
        for(int i = 0; i< n ; ++i){
            if(isPalindrome(words[i])){
                return words[i];
            }
        }
     return ans;   
    }
};