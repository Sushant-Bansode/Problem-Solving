class Solution {
public:
    
int maximumProduct(vector<int>& nums) {
sort(nums.begin( ), nums.end( ));  
   int n = nums.size( );
    long long n1 = nums[n-1]*nums[n-2]*nums[n-3];
    long long n2 = nums[0]*nums[1]*nums[n-1];    
 return max(n1,n2);    
    }
};