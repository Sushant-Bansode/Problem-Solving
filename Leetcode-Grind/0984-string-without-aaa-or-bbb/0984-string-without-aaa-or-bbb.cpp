class Solution {
public:
    string strWithout3a3b(int a, int b) {
          string ans;
        int ca=0,cb=0;
        while(a>0 || b>0) {
            if(a>b) {
                if(ca==2) {
                    b--;
                    cb=1;
                    ca=0;
                    ans+="b";
                }
                else {
                    a--;
                    ca++;
                    cb=0;
                    ans+="a";
                }
            }
            else {
                if(cb==2) {
                    a--;
                    ca=1;
                    cb=0;
                    ans+="a";
                }
                else {
                    b--;
                    cb++;
                    ca=0;
                    ans+="b";
                }
            }
        }
        return ans; 
    }
};