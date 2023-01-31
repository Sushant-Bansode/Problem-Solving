class Solution {
public:
    int removePalindromeSub(string s) {
    string s1 = s; 
    reverse(s1.begin( ), s1.end( ));
      if(s1 == s){return 1;}
    // Because Of the Segregating all a's and b's in one side for subsequence. Kahani Khatam in 2 steps only...
    else{return 2;}   
    }
};