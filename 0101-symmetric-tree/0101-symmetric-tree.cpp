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
    bool isSymmetric(TreeNode* root) {
         queue<TreeNode*> q;
        vector<vector<int>> bfs;
        q.push(root);
        while(!q.empty()){
            int a=q.size();
            vector<int> arr;
            while(a--){
                TreeNode* t=q.front();
                if(t->left!=NULL){
                    q.push(t->left);
                    arr.push_back(t->left->val);
                }else{
                    arr.push_back(-101);
                }
                if(t->right!=NULL){
                    q.push(t->right);
                    arr.push_back(t->right->val);
                }else{
                    arr.push_back(-101);
                }
                q.pop();
            }
            bfs.push_back(arr);
        }
        for(int i=0;i<bfs.size();i++){
            int a=bfs[i].size();
            int s=a/2 -1,e=a/2;
            while(s>-1 && e<a){
                if(bfs[i][s]!=bfs[i][e]) return 0;
                s--;
                e++;
            }
        }
        return true;
    }
};