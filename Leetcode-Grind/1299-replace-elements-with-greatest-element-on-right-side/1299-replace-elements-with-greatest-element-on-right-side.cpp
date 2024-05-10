class Solution {
public:
    vector<int> replaceElements(vector<int>& arr){
        int n = arr.size( );
          int maxe = arr[n-1];
            arr[n-1] = -1;
        
        for(int i = n-2; i>=0; i--){
         int temp = maxe;
       maxe = max(arr[i], maxe); 
         arr[i] = temp;
        }
        
    return arr;
    } 
};