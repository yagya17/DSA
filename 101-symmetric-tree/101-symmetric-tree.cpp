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
   bool mirror(TreeNode* left,TreeNode* right)
    {   if(left==NULL&&right==NULL) return true;
     if(left==NULL||right==NULL) return false;
        if(left->val!=right->val) return false;
     bool one=mirror(left->left,right->right);
    bool two= mirror(left->right,right->left);
     return one&&two;
      
    }
    bool isSymmetric(TreeNode* root) {
        
        return mirror(root->left,root->right);
    }
};