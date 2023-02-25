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
    
int hgt(TreeNode* root){
      if(root == NULL){
          return 0;
      }else{
          return max(hgt(root->left), hgt(root->right)) + 1;
      }  
  }  
bool isBalanced(TreeNode* root) {
  if (root == NULL)
     return true;  
  int l = hgt(root-> left);
  int r = hgt(root -> right);  
  if(abs(l-r) > 1){
      return false;
  }
    
  bool ls = isBalanced(root -> left);
  bool rs = isBalanced(root-> right);  
  if(ls == false || rs == false){
   return false;   
  } 
  
 return true;    
    }
};