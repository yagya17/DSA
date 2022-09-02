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
  TreeNode* prev=NULL;
    void flatten(TreeNode* root) {
        if(!root) return ;
    stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
            TreeNode* cur=st.top();st.pop();
            if(cur->right) st.push(cur->right);
            if(cur->left) st.push(cur->left);
            if(!st.empty()) cur->right=st.top();
            cur->left=NULL;
        }
        
        
        
    }
};
T.C. O(N)
S.C. O(N)

//
  
  
class Solution {
public:
  TreeNode* prev=NULL;
    void flatten(TreeNode* root) {
        
        if(!root) return;
        
        flatten(root->right);
       flatten(root->left);  
        root->right=prev;
        root->left=NULL;
        prev=root;
        
        
    }
};
T.C. O(N)
S.C. O(N)
  
//
  
  class Solution {
public:
    void flatten(TreeNode* root) {
        TreeNode* dup=root;
    while(dup)
    { 
        if(dup->left)
        {
            TreeNode* cur=dup->left;
        while(cur->right) cur=cur->right;
           cur->right=dup->right;
            dup->right=dup->left;
            dup->left=NULL;
        }
         dup=dup->right;
        
    }
        
    }
};


T.C. : O(N)
S.C. : O(1)
