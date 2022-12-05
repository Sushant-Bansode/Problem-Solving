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
    void postorderhelp(TreeNode* root, vector<int>&ans){
        if(root == NULL){
            return;
        }
        postorderhelp(root->left, ans);  //left subtree
        postorderhelp(root->right, ans); //right subtree
   ans.push_back(root->val);      //pushing value of root to ans   
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorderhelp(root,ans);
        return ans;
    }
};
