class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
      vector<int> ans;
        sort(a.begin() ,a.end());
        sort(b.begin( ),b.end());
        for(int i = 0; i < a.size(); ++i){
            if(i > 0 && a[i] == a[i-1])
                continue;
            for(int j = 0; j < b.size( ); ++j){
             if(a[i] == b[j]){
             ans.push_back(a[i]);   
              break;  }
          }  
        }
    
     return ans;   
    }
};