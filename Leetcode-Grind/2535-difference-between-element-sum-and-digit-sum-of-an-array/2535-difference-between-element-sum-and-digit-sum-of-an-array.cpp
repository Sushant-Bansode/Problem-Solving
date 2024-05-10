class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
      long long digs = 0;
     long long sum = 0;
      for(auto x: nums){
          sum += x;
          string s = to_string(x);
          for(auto k: s){
              digs += (k - '0');
          }
      }  
  return abs(digs - sum);      
    }
};