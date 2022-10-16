class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     vector <int> ans;
     for(int i = 0; i<nums.size( );++i){
         int temp = 0;
        for(int j = 0; j<nums.size( );++j) {
         if(nums[j] < nums[i] && i!=j)
            temp++;       
        }
       ans.push_back(temp);  
     } 
       
    return ans;    
    }
};