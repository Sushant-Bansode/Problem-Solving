class Solution {
public:
   long long fact(int n)
    {
        if(n<=1)return 1;
        return (n*fact(n-1)%1000000007)%1000000007;
    }
    
    int numPrimeArrangements(int n) {
        if(n==1)return 1;
        if(n<=3)return n-1;
        int t=0,flag;
        for(int i=2;i<=n;i++)
        {
            flag=0;
            for(int j=2;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                t++;
            }
        }
        return (fact(t)*fact(n-t))%1000000007;
    }
};
