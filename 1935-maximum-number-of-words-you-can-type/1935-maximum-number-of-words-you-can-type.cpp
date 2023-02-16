class Solution {
public:
    bool match(string s,string t){
        for(int i=0;i<s.size();i++){
            for(int j=0;j<t.size();j++){
                if(s[i]==t[j]) return 1;
            }
        }
        return 0;
    }
    int canBeTypedWords(string text, string brokenLetters) {
        int x=text.size();
        int m=brokenLetters.size();
        vector<string>v;
        string t;
        for(int i=0;i<x;i++){
            if(text[i]==' '){
                v.push_back(t);
                t.clear();
            }else{
                t+=text[i];
            }
        }
        v.push_back(t);
        int n=v.size();
        int ans=n;
        for(int i=0;i<n;i++){
                string s=v[i];
            if(match(s,brokenLetters)){
                ans=ans-1;
            }  
        }
        return ans;
    }
};