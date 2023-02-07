class Solution {
public:
    long long smallestNumber(long long num) {
    if(num == 0){
        return 0;
    }
        string s = to_string(num);
   if(num > 0){
    sort(s.begin( ), s.end( ));
       // Leading Zeroes Swapping Removing case and Nothing...
    int j = 0;
    for(int i = 0; i< s.length( ); ++i){
       if(s[i] != '0'){
           j = i;
           break;
       }   
    } 
       
   swap(s[0], s[0+j]);           
  return stoll(s);         
   }
   else{
    sort(s.rbegin( ), s.rend( ));   
   s.pop_back( );
   s = '-' + s;
   return stoll(s);    
   } 
     
    }
};