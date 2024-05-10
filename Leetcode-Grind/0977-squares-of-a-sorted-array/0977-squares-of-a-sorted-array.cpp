class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     vector<int> p = nums;
        
        for(int i =0; i<nums.size( );++i){
            p[i] = nums[i]*nums[i];
        }
      sort(p.begin( ), p.end( ));
        return p;
        
    }
};