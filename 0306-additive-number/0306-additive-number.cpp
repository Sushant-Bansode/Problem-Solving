class Solution {
public:
    bool isAdditiveNumber(string num) {
        
        int n = num.length();
        for (int i = 1; i < n; i++) {
            string s1 = num.substr(0, i);
            if (s1.size() > 1 && s1[0] == '0') 
             break;
        
            for (int j = i+1; j < n; j++){
                string s2 = num.substr(i, j-i);
                if (s2.size() > 1 && s2[0] == '0') break;
                long d1 = stol(s1); long d2 = stol(s2);
                long next = d1+d2;
                string next_str = to_string(next);
                string all_str = s1+s2+next_str;
                
                while (all_str.length() < num.length()) {
                    d1 = d2;
                    d2 = next;
                    next = d1+d2;
                    next_str = to_string(next);
                    all_str += next_str;
                }
                
                if (all_str == num) return true;
            }
        }
        
        return false;
    }
};