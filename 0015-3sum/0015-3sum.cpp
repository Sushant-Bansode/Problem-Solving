class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
    sort(arr.begin( ), arr.end( ));
      int n = arr.size( );  
     vector<vector<int>> ans;
    
    for(int i = 0; i< n; ++i){
        int target = -arr[i];
        
        int low = i+1, high = n -1;
    while(low< high){
            if(arr[low] + arr[high] == target){
                ans.push_back({arr[i],arr[low],arr[high]});
    while(low<high && arr[low] == arr[low+1]) low++;
    while(low<high && arr[high] == arr[high-1]) high--;  
                low++;
                high--;
            }else if(arr[low] + arr[high] > target){
                high--;
            }else{
                low++;
            }
                 }
        while(i+1 < n && arr[i+1] == arr[i]) i++;
       }
   return ans;     
    }
};