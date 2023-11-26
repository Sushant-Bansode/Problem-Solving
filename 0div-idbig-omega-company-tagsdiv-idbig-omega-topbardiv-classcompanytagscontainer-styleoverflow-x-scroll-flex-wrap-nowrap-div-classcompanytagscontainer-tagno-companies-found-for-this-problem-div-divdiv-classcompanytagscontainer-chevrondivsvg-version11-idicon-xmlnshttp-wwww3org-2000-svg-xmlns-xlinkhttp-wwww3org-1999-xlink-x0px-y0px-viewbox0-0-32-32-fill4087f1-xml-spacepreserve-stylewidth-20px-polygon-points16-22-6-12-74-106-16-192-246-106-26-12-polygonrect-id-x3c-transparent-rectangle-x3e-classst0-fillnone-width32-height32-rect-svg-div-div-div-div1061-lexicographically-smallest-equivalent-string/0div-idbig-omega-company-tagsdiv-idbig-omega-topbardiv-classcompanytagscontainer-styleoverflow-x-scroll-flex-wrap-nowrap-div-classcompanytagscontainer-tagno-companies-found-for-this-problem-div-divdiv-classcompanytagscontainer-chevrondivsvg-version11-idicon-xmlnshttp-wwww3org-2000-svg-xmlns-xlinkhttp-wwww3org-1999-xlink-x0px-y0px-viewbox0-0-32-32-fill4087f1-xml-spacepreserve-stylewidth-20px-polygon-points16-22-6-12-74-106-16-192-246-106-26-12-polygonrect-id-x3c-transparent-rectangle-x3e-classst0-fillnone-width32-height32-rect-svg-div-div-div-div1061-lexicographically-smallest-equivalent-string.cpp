class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string bs) {
        vector<char>v(26);
        for(char i='a';i<='z';i++) v[i-'a']=i;
        for(int k=0;k<4;k++)
        for(int i=0;i<s1.size();i++){
            v[s2[i]-'a']=min(v[s1[i]-'a'],v[s2[i]-'a']);
            v[s1[i]-'a']=min(v[s1[i]-'a'],v[s2[i]-'a']);
        }
        for(int i=0;i<bs.size();i++) bs[i] = v[bs[i]-'a'];
        return bs;
    }
};