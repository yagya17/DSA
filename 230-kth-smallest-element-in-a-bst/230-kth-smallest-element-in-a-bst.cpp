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
    vector<int>v;
    void sol(TreeNode* root)
    {   if(root==NULL) return;
        sol(root->left);
     v.push_back(root->val);
        sol(root->right);
      
    }
    int kthSmallest(TreeNode* root, int k) {
        sol(root);
        
        
        return v[k-1];
    }
};