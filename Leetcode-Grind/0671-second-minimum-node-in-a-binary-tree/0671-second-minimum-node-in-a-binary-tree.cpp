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
 void inorderhelp(TreeNode *root, set<int>&ans){
    if(root == NULL){
        return;
    }
    inorderhelp(root-> left,ans); 
    ans.insert(root-> val);
    inorderhelp(root-> right,ans);
}   
        
int findSecondMinimumValue(TreeNode* root) {
   set<int>ans;      
   inorderhelp(root,ans);  
if(ans.size( ) == 1){
    return -1;
}    
auto it = ans.begin();
it++;    
return (*it);    
}
};