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

class BSTIterator {
     stack<TreeNode*>st;
    bool temp=true;
public:
   
    BSTIterator(TreeNode* root,bool isrev) {
        temp=isrev;
        push(root);
    }
    
    int next() {
        TreeNode* ans=st.top();st.pop();
       if(!temp) push(ans->right);
        else push(ans->left);
        return ans->val;
        
    }
    
    bool hasNext() {
     if(!st.empty()) return true;
        return false;
    }
        private:
        void push(TreeNode *root)
        {
            while(root)
            {
                st.push(root);
                if(!temp) root=root->left;
                else root=root->right;
            }
        }
    
};
class Solution {
public:
    bool findTarget(TreeNode* root,int k)
    {
        if(!root) return root;
        BSTIterator l(root,false);
        BSTIterator r(root,true);
        int i=l.next(); int j=r.next();
        while(i<j)
        {
            if(i+j==k) return true;
            if(i+j<k) i=l.next();
            else j=r.next();
        }
        return false;
        
    }
};