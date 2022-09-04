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
    priority_queue<int>q;
    void sol(TreeNode* root, int k)
    {   if(root==NULL) return;
        q.push(root->val);
       if(q.size()>k) {q.pop();}
        sol(root->left,k);
        sol(root->right,k);
      
    }
    int kthSmallest(TreeNode* root, int k) {
        sol(root,k);
        
        
        return q.top();
    }
};