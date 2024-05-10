class Solution {
public:
string thousandSeparator(int n) {
      string s=to_string(n);
        int j=0;
        if(s.length()>3)
        {
            string n="";
            for(int i=s.length()-1;i>=0;i--)
            {
                j++;
                if((j!=1)&&(j%3==1))
                {
                    n=n+'.';
                }
                n=n+s[i];
            }
            reverse(n.begin(), n.end());
            return n;
        }
        return s;
 
    }
};