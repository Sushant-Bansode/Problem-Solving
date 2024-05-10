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
   
 void inorderhelp(TreeNode *root, vector<int>&ans){
    if(root == NULL){
        return;
    }
    inorderhelp(root-> left,ans); 
    ans.push_back(root-> val);
    inorderhelp(root-> right,ans);
}       
     
    int minDiffInBST(TreeNode* root) {
   vector<int> ans;      
   inorderhelp(root,ans);     
   int res = INT_MAX;
   for(int i = 0; i< ans.size( )-1; ++i){
       res = min(res, abs(ans[i+1]-ans[i]));   
   }
return res;         
    }
};