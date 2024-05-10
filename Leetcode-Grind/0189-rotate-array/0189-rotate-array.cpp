class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
        int n  = nums.size( );
      if(k > n){
          while(k > n){
              k -= n;
          }
      }
       vector<int>temp;
       vector<int>duplicate = nums; 
      for(int i = n - k; i< n; ++i){
          temp.push_back(nums[i]);
      }
        
    for(int i = 0; i < n - k;++i){
       nums[i + k] = duplicate[i]; 
    }
     for(int i = 0; i< k ; ++i){
         nums[i] = temp[i];
     }    
    }
};