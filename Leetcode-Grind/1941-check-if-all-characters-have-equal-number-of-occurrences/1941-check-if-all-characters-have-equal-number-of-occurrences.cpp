class Solution {
public:
    bool areOccurrencesEqual(string s) {
   int freq[26] = {0};
    for (int i = 0; i < s.size(); i++){
         freq[s[i] - 'a']++;
    }
        
    int x = freq[s[0] - 'a'];
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0 || (freq[i] == x)){
               continue;
        }
        else{
              return false;
        }     
    }
    return true;      
    }
};