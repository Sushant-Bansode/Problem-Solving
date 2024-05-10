class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
     int N = arr.size( );
    vector<vector<int>> ans; 
    if(N != m*n){
      return ans;   
     }
   int k = 0;     
  for(int i = 0; i< m; ++i){
     vector<int> temp; 
     for(int j = 0; j < n; ++j){
         temp.push_back(arr[k++]); 
      }
    ans.push_back(temp);  
  }
  return ans;      
    }
};