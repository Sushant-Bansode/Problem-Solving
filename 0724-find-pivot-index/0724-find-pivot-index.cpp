class Solution {
public:
    int pivotIndex(vector<int>& arr) {
    int sum = 0; 
    int leftsum = 0; 
    int n = arr.size( );
 
    for (int i = 0; i < n; ++i)
        sum += arr[i];
 
    for (int i = 0; i < n; ++i) {
        sum -= arr[i]; 
        if (leftsum == sum)
            return i;
 
        leftsum += arr[i];
    }
        
    return -1;
    }
};