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

vector<int> findMode(TreeNode* root) {

vector<int> ans;      
 inorderhelp(root,ans);     
 map<int,int>mp;  
for(auto x: ans){mp[x]++;}
vector<int> ret;
 int maxfreq = 0;
for(auto x: mp){if(x.second >= maxfreq){maxfreq = x.second;}}
for(auto x: mp){if(x.second == maxfreq){ret.push_back(x.first);}}        
return ret;  
    }        
};
