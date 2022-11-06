The idea is to get the total sum of the array first. Then Iterate through the array and keep updating the left sum which is initialized as zero. In the loop, we can get the right sum by subtracting the elements one by one.
​
Initialize leftsum  as 0
Get the total sum of the array as sum
Iterate through the array and for each index i, do the following:
Update the sum to get the right sum.
sum = sum – arr[i]
The sum is now the right sum
If leftsum is equal to the sum, then return the current index.
update left sum for the next iteration.
leftsum = leftsum + arr[i]
Return -1
If we come out of the loop without returning then there is no equilibrium index
​
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