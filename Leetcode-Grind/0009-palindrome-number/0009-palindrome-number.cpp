class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0 )
    return false;    
        
    string str1 = to_string(x);
    long long rev = 0;
    while (x > 0){
    int temp = x % 10;
    rev = rev*10 + temp;
    x = x/10;
    }    
    string str2 = to_string(rev);
    if(str2 == str1)
    return true;
    else
    return false;    
    }
};