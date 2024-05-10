class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
   if(n == 1 && trust.size( ) == 0){return 1;}  
   map<int,int> mp1, mp2;
   for(int i = 0; i< trust.size( ); ++i){
     mp1[trust[i][0]]++;
     mp2[trust[i][1]]++;  
   }
   for(auto x: mp2){
    if(x.second == n-1 && mp1[x.first] == 0){
     return x.first;   
    }   
   }
 return -1;       
    }
};