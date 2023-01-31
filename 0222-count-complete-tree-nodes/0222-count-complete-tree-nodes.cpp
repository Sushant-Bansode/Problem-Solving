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

void preorderhelp(TreeNode *root, vector<int>&ans){
    if(root == NULL){
        return;
    }
    ans.push_back(root-> val);
    preorderhelp(root-> left,ans);
    preorderhelp(root-> right,ans);
}

class Solution {
public:
    int countNodes(TreeNode* root) {
   vector<int> ans;      
   preorderhelp(root,ans);     
   return ans.size( );    
    }
};