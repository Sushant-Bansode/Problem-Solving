class Solution {
public:
 vector<int> divisibilityArray(string word, int m) {
   vector<int> res;
    for (long long i = 0, mod = 0; i < word.size(); ++i){
        mod = (mod * 10 + word[i] - '0') % m;
        if(mod == 0){
            res.push_back(1);
        }else{
            res.push_back(0);
        }
    }
    return res;
    }
};