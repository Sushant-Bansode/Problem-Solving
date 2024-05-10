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
vector<double> averageOfLevels(TreeNode* root) {
         vector<vector<int>>ans;
          vector<double> ret; 
        if(!root)return ret;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
           int sz=q.size();
           vector<int>v;
           while(sz--){
               TreeNode * f=q.front();
               v.push_back(q.front()->val);
               q.pop();
               if(f->left)q.push(f->left);
               if(f->right)q.push(f->right);

           }
           ans.push_back(v);
        }
     for(int i = 0; i< ans.size( ); ++i){
         double k = 0.0;
         for(auto x: ans[i]){
             k += x;
         }
        k /= (ans[i].size( )*1.0);
      ret.push_back(k);   
     }    
  return ret;          
    }
};