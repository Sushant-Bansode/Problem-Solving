class Solution {
public:
vector<vector<int>> permute(vector<int>& arr) {
     vector<int> temp = arr;      
     vector<vector<int>> ans;
      ans.push_back(temp);
        while(1){
          next_permutation(temp.begin(),temp.end());   
          if(temp == arr){
             break;   
          }else{
             ans.push_back(temp);  
          } 
        }
 return ans;   
    }
};