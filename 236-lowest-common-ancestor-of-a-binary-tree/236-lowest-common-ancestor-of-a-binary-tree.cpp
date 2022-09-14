/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   TreeNode* sol(TreeNode* root, TreeNode* p, TreeNode* q)
    {
       if(root==NULL) return NULL;
        if(root->val==p->val) return p;
       if(root->val==q->val) return q;
       TreeNode* o=sol(root->left,p,q) ;
       TreeNode* m=sol(root->right,p,q);
       if(!o) return m;
       if(!m) return o;
       else return root;
        
    } 
    
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        
        return sol(root,p,q);
        
    }
};