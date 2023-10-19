class Solution {
public:
    string convert(string &s){
        string ans = "";
        for(auto x : s){
            if(x == '#'){
                if(ans.length( ) > 0){
                    ans.pop_back( );
                }
            }else{
                ans += x;
            }
        }
    return ans;    
    }
    
    bool backspaceCompare(string s, string t) {
    string s1 = convert(s);
    string t1 = convert(t);    
    
    return (t1 == s1);    
    }
};