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
    TreeNode* sol(int i, int j,vector<int>& nums )
    {  if(i>j) return NULL;
         TreeNode* root=new TreeNode(0);
        int mid=(j+i)/2;
        root->val=nums[mid];
        root->left=sol(i,mid-1,nums);
        root->right=sol(mid+1,j,nums);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root=sol(0,nums.size()-1,nums);
        return root;
    }
};