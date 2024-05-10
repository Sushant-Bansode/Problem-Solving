class Solution {
    void helper(int nums, vector<int> &bits, int op){
        for(int i=0; i<=30; i++){
            if(nums & (1ll << i)){
                bits[i] += op;
            }
        }
    }
    
    bool isValid(vector<int> &bits){
        for(int i=0; i<=30; i++){
            if(bits[i] > 1) return false;
        }
        return true;
    }
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int i = 0, j = 0;
        vector<int> bits(32, 0);
        while(j < n){
            helper(nums[j], bits, 1); // adding to out subarray count
            
            while(!isValid(bits)){ // remove the element from starting till not get Nice Subarray
                helper(nums[i], bits, -1); // subtract 1 from bit
                i++;
            }
            ans = max(ans, j-i+1);
            j++;
        }
        return ans;
        
    }
};