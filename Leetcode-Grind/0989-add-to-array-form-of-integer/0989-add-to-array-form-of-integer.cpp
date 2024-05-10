class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
      vector<int> t, ans;
        while(k > 0){
           t.push_back(k%10);
            k/=10;
       }
    reverse(t.begin( ), t.end( ));    
    
     int i = num.size( ) - 1;
      int j = t.size( ) - 1; 
     int carry = 0;
        
 while(i >=0 || j>=0 || carry != 0){
       int ival = 0, jval = 0;
          if(i>=0){ ival = num[i];}
          if(j>=0){ jval = t[j];}
         i--;
         j--;
        int sum = ival + jval + carry;  
        ans.push_back(sum%10);
        carry = sum / 10;   
       }
 reverse(ans.begin( ), ans.end( ));       
 return ans;     
    }
};