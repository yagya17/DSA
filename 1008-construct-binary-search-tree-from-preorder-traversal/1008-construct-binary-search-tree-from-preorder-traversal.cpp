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
public: int i=0;
    TreeNode* sol(int bound,vector<int>& pre)
    {     
        if(i==pre.size()||pre[i]>bound) return NULL;
        TreeNode* root=new TreeNode(pre[i]);
        // i++;
        i+=1;
        root->left=sol(root->val,pre);
        root->right=sol(bound,pre);
        return root;
        
    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
    
        
        return sol(INT_MAX,pre);
    }
};