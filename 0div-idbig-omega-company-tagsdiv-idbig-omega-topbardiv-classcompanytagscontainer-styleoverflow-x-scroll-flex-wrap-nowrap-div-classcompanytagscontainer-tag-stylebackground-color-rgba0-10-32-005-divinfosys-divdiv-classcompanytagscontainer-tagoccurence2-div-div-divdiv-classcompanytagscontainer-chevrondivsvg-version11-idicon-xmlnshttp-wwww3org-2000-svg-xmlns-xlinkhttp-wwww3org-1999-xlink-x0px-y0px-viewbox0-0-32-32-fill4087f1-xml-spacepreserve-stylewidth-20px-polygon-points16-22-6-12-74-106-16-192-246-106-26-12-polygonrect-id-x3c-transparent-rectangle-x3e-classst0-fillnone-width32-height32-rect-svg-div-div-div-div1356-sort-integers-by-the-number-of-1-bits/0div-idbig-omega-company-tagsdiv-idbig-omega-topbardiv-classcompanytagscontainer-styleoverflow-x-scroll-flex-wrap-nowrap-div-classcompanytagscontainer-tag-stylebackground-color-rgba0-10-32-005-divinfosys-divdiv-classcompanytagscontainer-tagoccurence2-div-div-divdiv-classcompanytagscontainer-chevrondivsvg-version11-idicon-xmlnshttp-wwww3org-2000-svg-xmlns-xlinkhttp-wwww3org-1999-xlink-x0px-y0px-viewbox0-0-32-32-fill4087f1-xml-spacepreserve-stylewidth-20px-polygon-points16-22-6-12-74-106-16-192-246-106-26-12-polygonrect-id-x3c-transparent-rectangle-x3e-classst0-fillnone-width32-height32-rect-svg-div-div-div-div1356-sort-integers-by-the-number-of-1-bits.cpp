class Solution {
public:
static bool bitsort(int &a, int &b){
        int a1 = __builtin_popcount(a);
        int b1 = __builtin_popcount(b);
      if(a1 != b1)  {
        return(a1 < b1);   
      }
      else{
        return (a < b);  
      }  
    }
    vector<int> sortByBits(vector<int>& arr) {    
        vector<int> ans = arr;
       sort(ans.begin( ), ans.end( ), bitsort);
       return ans; 
    }
};
