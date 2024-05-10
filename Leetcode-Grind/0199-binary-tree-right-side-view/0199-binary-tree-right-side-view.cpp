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
    map<int,int>m;
    void dfs(TreeNode* root, int l){
        if(root==NULL)return;
        if(m.find(l)==m.end()){
            m[l]=root->val;
        }
        dfs(root->right,l+1);
        dfs(root->left,l+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>a;
        if(!root)return a;
        dfs(root,1);
        for(auto i:m)a.push_back(i.second);
        return a;
    }
};