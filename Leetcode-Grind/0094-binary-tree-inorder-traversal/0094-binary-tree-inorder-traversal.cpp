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
    void inorderhelp(TreeNode* root, vector<int>&ans){
        if(root == NULL){
            return;
        }
        inorderhelp(root->left, ans);  //left subtree
        ans.push_back(root->val);      //pushing value of root to ans
        inorderhelp(root->right, ans); //right subtree
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderhelp(root,ans);
        return ans;
    }
};