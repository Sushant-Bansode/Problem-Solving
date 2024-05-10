class Solution {
public:
    int distinctAverages(vector<int>& nums) {
      sort(nums.begin( ), nums.end( ));
        int n = nums.size( );
     vector<float> ans;
     for(int i =0 ;i< n; ++i){
         ans.push_back((nums[i] + nums[n-1-i])/2.0);
     }
    set<float> s;    
    for(auto c : ans) s.insert(c);
        
    return s.size();    
    }
};