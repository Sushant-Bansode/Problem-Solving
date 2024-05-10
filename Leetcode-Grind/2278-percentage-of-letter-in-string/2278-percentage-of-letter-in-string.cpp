class Solution {
public:
    int percentageLetter(string s, char letter) {
     unordered_map<char,int>mp;
        for(auto x:s){mp[x]++;}
   int temp = 0, total = s.length( );
        for(auto x:mp){
        if(x.first == letter){
            temp = x.second;
        }
    }
   return (temp*1.0/total)*100;     
    }
};