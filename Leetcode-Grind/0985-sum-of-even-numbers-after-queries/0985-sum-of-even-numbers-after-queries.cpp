class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
  // Total 3 cases Formed in, this Question on addition of the Query Elements in the, SUM as Total,
 // To Be added new element -> odd-> even.
 // To Be added new element -> even-> odd.
// To Be added new element -> even -> even.        
        int sum = 0;
 for(auto x: nums){if(x % 2 == 0){sum += x;}}
  vector<int> ans;
  for(int i = 0; i < queries.size( ); ++i){
    int index = queries[i][1];
    int val = queries[i][0];  
  if((nums[index] + val) % 2 == 0){
      if(nums[index] % 2 == 0){
          sum += val;
      }else{
         sum += val + nums[index]; 
      }
  }
else if((nums[index] + val) % 2 != 0){
      if(nums[index] % 2 == 0){
          sum -= nums[index];
      }
   }
 nums[index] += val;
 ans.push_back(sum);     
}
return ans; 
    }
};