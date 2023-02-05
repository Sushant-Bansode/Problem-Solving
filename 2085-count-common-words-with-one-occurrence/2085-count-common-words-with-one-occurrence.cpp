class Solution {
public:
    int countWords(vector<string>& word1, vector<string>& word2) {
        map<string, int> mp1;
        map<string, int> mp2;
     for(auto x: word1){mp1[x]++;}
     for(auto x: word2){mp2[x]++;} 
     int count = 0;
    for(auto x : mp1){
        if(x.second == 1 && mp2[x.first] == 1){
            count++;
        }
    }    
  return count;      
    }
};