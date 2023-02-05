class Solution {
public:

bool check(string s, int invalid){
s.erase(s.begin( )+ invalid);
int n = s.size( );
for(int i = 0; i< n/2; ++i){
    if(s[i] != s[n-1-i]){
        return false;
        }
     }
 return true;        
}
    
bool validPalindrome(string s) {
      int n = s.size( );
      int invalid = -1;  
     for(int i = 0; i< n/2; ++i){
         if(s[i] != s[n-1-i]){
             invalid = i;
             break;
         }
     }
     if(invalid == -1){
         return true;
     }
 cout << invalid << endl;       
return (check(s,invalid) || check(s, n-1-invalid));
    }
};