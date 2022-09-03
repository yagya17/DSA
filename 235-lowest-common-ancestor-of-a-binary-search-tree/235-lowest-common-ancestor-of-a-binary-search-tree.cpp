/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// class Solution {
// public:
//     TreeNode* sol(TreeNode* root,TreeNode* p, TreeNode* q)
//     {    
//         if(p->val>root->val&&q->val>root->val){return sol(root->right,p,q);}
//         else if(p->val<root->val&&q->val<root->val) return sol(root->left,p,q);
//         return root;
        
//     }
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        
//         return sol(root,p,q);
//     }
// };

class Solution {
public:
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
       while(root)
       {
        if(p->val>root->val&&q->val>root->val){root=root->right;}
        else if(p->val<root->val&&q->val<root->val) root=root->left;
       else break;
       }
        return root;
    }
};