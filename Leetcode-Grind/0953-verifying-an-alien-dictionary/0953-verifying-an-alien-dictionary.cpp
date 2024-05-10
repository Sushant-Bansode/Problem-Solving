class Solution {
public:
    bool isAlienSorted(vector<string>& s, string order) {
 map<char, char> mp;
 char x = 'a';
 for(auto c: order) {
  mp[c] = x;
  x++;
}   
        for(int i = 0; i< s.size( ); ++i){
            for(int j = 0; j< s[i].length( ); ++j){
               s[i][j] = mp[s[i][j]];
            }
        }
return is_sorted(s.begin(), s.end());
    }
};