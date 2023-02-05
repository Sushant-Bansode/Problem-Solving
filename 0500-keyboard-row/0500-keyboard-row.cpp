class Solution {
public:
    
bool check(char c ,string s){
        for(auto i : s) if(i == c) return true;
        return false;
}  
    
vector<string> findWords(vector<string>& words) {
        vector<string>mp={"qwertyuiop","asdfghjkl","zxcvbnm"};
        vector<string>ans;
        int n = words.size();
        for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
         bool found = true;
        for(int k=0;k<words[i].size();k++){
         if(!check(tolower(words[i][k]),mp[j])) found=false;
        }
        if(found){
        ans.push_back(words[i]);
        break;
        }
    }
}
return ans;
    }
};