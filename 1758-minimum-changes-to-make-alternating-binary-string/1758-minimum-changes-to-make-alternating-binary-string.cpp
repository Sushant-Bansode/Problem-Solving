class Solution {
public:
int check(string s, char c){
    int total = 0;
        for(auto x: s){
         if(x != c){
             total++;
         }
            
         if(c == '1'){
             c = '0';
         }else{
             c = '1';
         }
     }   
 return total;        
}
    
    int minOperations(string s) {
     return min(check(s, '1'),check(s, '0'));        
    }
};