class Solution {
public:
    bool checkString(string s) {
     string str = s;
        sort(str.begin(),str.end());
        if(str==s){
            return true;
        }
        return false;       
    }
};