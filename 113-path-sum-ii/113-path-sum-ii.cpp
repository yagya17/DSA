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
    vector<vector<int>> ans;
    void sol(TreeNode* root, int tar,int curr,vector<int> v)
    {
             if(root==NULL) return;
        if(!root->left&&!root->right){
            if(curr+root->val==tar)
            {v.push_back(root->val);ans.push_back(v); }
            return ;
        }
   
            v.push_back(root->val);
     
            sol(root->left,tar,curr+root->val,v);
            sol(root->right,tar,curr+root->val,v);
        
     
   
    }
    vector<vector<int>> pathSum(TreeNode* root, int tar) {
        
        ans.clear();
        vector<int> v;
        if(!root) return ans;
        sol(root,tar,0, v);
        return ans;
        
    }
};