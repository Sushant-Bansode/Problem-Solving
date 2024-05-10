class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int x) {
        vector <int> ans;
        int start = 0, end = arr.size( ) -1;
       
        while(start < end){
         if(arr[start] + arr[end] < x)
            start++;  
         else if(arr[start] + arr[end] > x)
            end--;    
        else if(arr[start] + arr[end] == x){
             ans.push_back(start + 1);
             ans.push_back(end + 1);
             return ans;
         }
            
        }
   return ans;     
    }
};