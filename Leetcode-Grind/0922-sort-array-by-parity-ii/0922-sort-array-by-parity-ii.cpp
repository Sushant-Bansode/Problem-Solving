class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        vector<int> ans;
        for(auto x: nums){
            if(x&1){
                odd.push_back(x);
            }else{
                even.push_back(x);
            }
        }
  int n = nums.size( );
        for(int i = 0; i< odd.size( ); ++i){
            ans.push_back(even[i]);
            ans.push_back(odd[i]);
        }
 return ans;       
    }
};