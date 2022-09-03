/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
      queue<pair<Node*,int>>q;
        root->next=NULL;
       if(root->left) q.push({root->left,0});
        if(root->right)q.push({root->right,0});
        while(!q.empty())
        {
           Node* cur= q.front().first; 
            int lvl=q.front().second;
            while(q.front().second==lvl)
            {
                Node *temp=q.front().first;
                q.pop(); 
                if(temp->left)q.push({temp->left,lvl+1});
                if(temp->right)q.push({temp->right,lvl+1});
                if(q.front().second==lvl)
                {temp->next=q.front().first;}
                else{temp->next=NULL;}
                
            }
            
        }
        return root;
    }
};