class Solution {
public:
    string addStrings(string num1, string num2) {
       string ans;
      int i = num1.size( ) - 1;
      int j = num2.size( ) - 1; 
    
     int carry = 0;
 while(i >=0 || j>=0 || carry != 0){
       int ival = 0, jval = 0;
          if(i>=0){ ival = num1[i] - '0';}
          if(j>=0){ jval = num2[j] - '0';}
         i--;
         j--;
        int sum = ival + jval + carry;
        char temp = (sum%10 + '0');    
        ans = temp + ans;
        carry = sum / 10;   
       }  
 return ans;   
    }
};