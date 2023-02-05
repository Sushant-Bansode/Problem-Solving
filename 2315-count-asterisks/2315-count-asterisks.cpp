class Solution {
public:
    int countAsterisks(string s) {
        int bar_count = 0;
        int count = 0;
        for(int i = 0; i< s.length( ); ++i){
            if(s[i] == '|'){
                bar_count++;
            }else{
                if(bar_count % 2 ==0 && s[i] == '*'){
                    count++;
                }
            }
        }
 return count;       
    }
};