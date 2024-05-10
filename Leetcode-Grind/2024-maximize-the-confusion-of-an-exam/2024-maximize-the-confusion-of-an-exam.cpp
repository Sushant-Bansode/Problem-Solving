class Solution {
public:
    int solve(string str,int k,char c)
    {
       int n = str.size(),i = 0,j = 0,count = 0,maxwindow = 0;
       while(j<n)
        {
           if(str[j]==c) count++;
           while(i<j && count>k)
           {
             if(str[i]==c) count--;
             i++;
           }
           maxwindow = max(maxwindow,j-i+1);
           j++;
        }
        return maxwindow;
    }
    int maxConsecutiveAnswers(string str, int k) {
      return max(solve(str,k,'F'),solve(str,k,'T'));
    }
};