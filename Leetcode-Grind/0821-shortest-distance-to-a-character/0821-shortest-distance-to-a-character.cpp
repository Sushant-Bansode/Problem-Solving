class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
      int n = s.length( );
    vector<int> left(n), right(n);
    if(s[0] == c){
        left[0] = 0;
    }else{
       left[0] = -1; 
    }
    for(int i = 1; i< n ; ++i){
     if(s[i] == c ){
         left[i] = i;
     }else{
         left[i] = left[i-1];
     }   
    }    
    
    if(s[n-1] == c){
        right[n-1] = n-1;
    }else{
       right[n-1] = -1; 
    }
    for(int i = n-2; i >= 0 ; i--){
     if(s[i] == c ){
         right[i] = i;
     }else{
         right[i] = right[i+1];
     }   
    }
  
 vector<int> ans(n);
  for(int i = 0; i< n; ++i){
   if(left[i] != -1 && right[i] != -1){
       ans[i] = min(i-left[i], right[i]-i);
   }else if(left[i] != -1){
      ans[i] = i - left[i]; 
   }else{
      ans[i] = right[i] - i; 
   }  
  }      
 
  return ans;      
    }
};