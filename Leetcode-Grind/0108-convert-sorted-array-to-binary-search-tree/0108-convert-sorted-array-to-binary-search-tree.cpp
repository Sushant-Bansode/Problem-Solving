/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* create(int l, int r, vector<int>&nums){
        // Base case
        if(l == r){
            TreeNode* nn = new TreeNode(nums[l]); 
        return nn;
        }
        if(l > r){
        return NULL;    
        }
        int mid = (l+r)/2;
     TreeNode *ptr = new TreeNode(nums[mid]);   
     ptr-> left = create(l, mid-1, nums);
     ptr-> right = create(mid+1, r, nums);
     return ptr;   
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
     int l = 0, r = nums.size( ) - 1;
      return create(l,r,nums);  
    }
};