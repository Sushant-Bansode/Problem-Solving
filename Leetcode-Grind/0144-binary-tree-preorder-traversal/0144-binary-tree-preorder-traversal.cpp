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
    void preorderhelp(TreeNode* root, vector<int>&ans){
        if(root == NULL){
            return;
        }
        ans.push_back(root->val);      //pushing value of root to ans
        preorderhelp(root->left, ans);  //left subtree
        preorderhelp(root->right, ans); //right subtree
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorderhelp(root,ans);
        return ans;
    }
};
