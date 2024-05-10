
class Solution {
public:
    bool hasAlternatingBits( int n ) {
        // Taking EX-OR with its Right Shift.
        long x = ( n^( n >> 1) );
        // if(x & x+1 is zero return True.)
        if( (x &( x+1 )) == 0){
           return true; 
        }
        else 
            return false;
    }
};