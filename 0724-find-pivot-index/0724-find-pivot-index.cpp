class Solution {
public:
    int pivotIndex(vector<int>& arr) {
   // Typical O(N) Possible Solution With Prefix Sum Types Approach in C++.
    int sum = 0; // initialize sum of whole array
    int leftsum = 0; // initialize leftsum
    int n = arr.size( );
    // Find sum of the whole array 
    for (int i = 0; i < n; ++i)
        sum += arr[i];
 
    for (int i = 0; i < n; ++i) {
        sum -= arr[i]; // sum is now right sum for index i
 
        if (leftsum == sum)
            return i;
 
        leftsum += arr[i];
    }
        
    return -1;
    }
};