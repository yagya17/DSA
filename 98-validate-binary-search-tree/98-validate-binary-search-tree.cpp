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
   bool sol(TreeNode* root,long long lower,long long upper)
    {    
       if(root==NULL) return true;
       if(root->val<=lower) return false;
       if(root->val>=upper) return false;
       return sol(root->left,lower,root->val)&&sol(root->right,root->val,upper);
    }
    bool isValidBST(TreeNode* root) {
       // if(!root->left&&!root->right) return true;
        return sol(root,LONG_MIN,LONG_MAX);
    }
};