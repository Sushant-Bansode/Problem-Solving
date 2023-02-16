class Solution {
public:
    bool makeEqual(vector<string>& words) {
      map<char, int> mp;
      int n=words.size();
      for(string word:words)
      {
          for(char w :word)
          {
              mp[w]++;
          }
      }  
      for(auto m:mp)
      {
          if(m.second%n!=0)
          return false;
      }
      return true;
    }
};