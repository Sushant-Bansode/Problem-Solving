#define ll long long int 
class Solution {
public:
   ll bigmod(ll num,ll power,ll mod)
   {
       if(power==0)
       {
          return 1;
       }
       else if(power&1)
       {
          return (num*(bigmod(num,power-1,mod)))%mod;
       }
        
      else{
          ll p = bigmod(num,power/2,mod)%mod;
          return (p*p)%mod;
      }
       
   }

    int superPow(int a, vector<int>& b) {
        
      ll ans=1,mod=1337;
      for(auto power:b)
        {
             ans=bigmod(ans,10,mod)*bigmod(a,power,mod);
             ans%=mod;
        }
      return ans;
    }
};