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
  bool hasPathSum(TreeNode* root, int targetSum) {
    stack<pair<TreeNode*, int>> s;
    if (root != nullptr) s.push({root, 0});
    while (!s.empty()) {
      auto [curr, sum] = s.top(); s.pop();
      sum += curr->val;
      if (sum == targetSum && curr->left == nullptr && curr->right == nullptr) return true;
      if (curr->left) s.push({curr->left, sum});
      if (curr->right) s.push({curr->right, sum});
    }   
    return false;
  }
};