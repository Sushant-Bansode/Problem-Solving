class Solution {
public:
    int trap(vector<int>& arr) {
    int n = arr.size( );
   int rightmax[n];     
     rightmax[n-1] = arr[n-1];
     for(int i = n-2; i>=0; i--){
         rightmax[i] = max(rightmax[i+1], arr[i]);
     }  
   int leftmax[n];     
     leftmax[0] = arr[0];
     for(int i = 1; i<n; i++){
         leftmax[i] = max(leftmax[i-1], arr[i]);
     }       
 int water =0;
   for(int i = 0; i<n; ++i){
   water = water + (min(leftmax[i], rightmax[i]) - arr[i]);
   } 
    return water;  
    }
};