class Solution {
public:
    int myAtoi(string s) { 
        int sign = 1 , i = 0; 
        // removing space
        while(s[i] == ' ') i++;
        //if string contains negative or positive sign 
        if(s[i] == '+'|| s[i] == '-'){ 
            if(s[i] == '-') sign = -1; 
            i++;
        }
        // double the result to overcome integer overflow
        double result = 0;  
        while (i < s.length()) {
            //removing null element
            int value = s[i] - '0'; 
            //number exist in limit or not
            if (value < 0 || value > 9) break; 
            //basic math
            result = (result * 10) + value;
            i++;
        }
        //if sign = -1 result turns out to negative
        if(sign == -1) result = result * (-1);
        
        // If answer is out of range of INT_MIN & INT_MAX
        if(result > INT_MAX) return INT_MAX;            
        else if (result<INT_MIN) return INT_MIN;
        else return result;
    }
};