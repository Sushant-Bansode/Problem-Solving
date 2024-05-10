class Solution {
public:
    string toGoatLatin(string s) {
      string ans; 
      int count=1; //to keep the count of a's to be put at each word's end.
      int sizes=s.size();
      unordered_set sets={'a','e','i','o','u','A','E','I','O','U'};
      int i=0;
      while(i<sizes)
      {
          if(s[i]==' ')
          {
              ans.push_back(' '); i++;
          }

          else if(sets.find(s[i])!=sets.end())
          {
              int j=i;
              while(s[j]!=' ' and j<sizes)
              {
                  ans.push_back(s[j]);
                  j++;
              }
              i=j;
              ans.push_back('m');
              ans.push_back('a');
              for(int c=1;c<=count;c++)
              {
                  ans.push_back('a'); //putting a's at the end of each word
              }
              count++; //increamenting the count's count
          }

          else
          {
              int j=i+1;
              char copy=s[i];// storing the first letter to append it at the word's end
              while(s[j]!=' ' and j<sizes)
              {
                  ans.push_back(s[j]);
                  j++;
              }
              i=j;
              ans.push_back(copy);
              ans.push_back('m');
              ans.push_back('a');
              for(int c=1;c<=count;c++)
              {
                  ans.push_back('a');
              }
              count++;
          }
      }  return ans;
    }
};