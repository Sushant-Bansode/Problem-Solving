class Solution {
public:
int peakIndexInMountainArray(vector<int>& arr) {
  int ans = 0, max = arr[0];
  int n = arr.size( );  
    for(int i = 0; i< n; ++i){
        if(arr[i] > max){
            max = arr[i];
            ans = i;
        }
    }
    
  return ans;  
    }
};