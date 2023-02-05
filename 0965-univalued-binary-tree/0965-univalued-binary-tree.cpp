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
    
bool isUnivalTree(TreeNode* root) {
        if(root == NULL){
           return false;
        } 
   vector<int> ans;      
   inorderhelp(root,ans);     
   for(int i = 0; i< ans.size( )-1; ++i){
       if(ans[i+1] != ans[i]){
           return false;
       }
   }
return true;     
    }
};